{ pkgs ? import <nixpkgs> {} }:

with pkgs;

let
  pythonWithPyYAML = pkgs.python310.buildEnv.override {
    extraLibs = with pkgs.python310Packages; [
      pip
      virtualenv
      pytest
      pyyaml
      antlr4-python3-runtime
    ];
    ignoreCollisions = true;
  };
in
mkShell.override { stdenv = pkgs.gcc14Stdenv; } {
  buildInputs = [
    pythonWithPyYAML
    pkgs.gcc14
    pkgs.gnumake
    pkgs.bear
    pkgs.graphviz
    pkgs.cmake
    pkgs.antlr4_12
  ];

  nativeBuildInputs = [
    pkgs.clang-tools_18
    pkgs.gmpxx.dev
    pkgs.llvmPackages_18.stdenv
    pkgs.llvmPackages_18.llvm
    pkgs.lld_18
  ];

  NIX_LD_LIBRARY_PATH = pkgs.lib.makeLibraryPath [
    pkgs.gcc14Stdenv
    pkgs.zlib
    pkgs.zlib.dev
  ];

  NIX_LD = pkgs.lib.fileContents "${pkgs.stdenv.cc}/nix-support/dynamic-linker";
  shellHook = ''
    export VENV_DIR="$PWD/.venv"
    if [ ! -d "$VENV_DIR" ]; then
      ${pythonWithPyYAML}/bin/python -m venv $VENV_DIR
      source $VENV_DIR/bin/activate
      pip install pip setuptools wheel
    else
      source $VENV_DIR/bin/activate
    fi

    export LD_LIBRARY_PATH=$NIX_LD_LIBRARY_PATH
    export PYTHONPATH="${pythonWithPyYAML}/lib/python3.10/site-packages:$PYTHONPATH"

    if [ -f requirements.txt ]; then
      pip install -r requirements.txt
    fi
    pip install pytest

    python --version
  '';
}
