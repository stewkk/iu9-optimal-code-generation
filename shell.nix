{ pkgs ? import <nixpkgs> {} }:

with pkgs;

mkShell.override { stdenv = pkgs.gcc14Stdenv; } {
  buildInputs = [
    pkgs.gcc14
    pkgs.gnumake
    pkgs.bear
    pkgs.graphviz
  ];

  nativeBuildInputs = [
    pkgs.clang-tools_18
    pkgs.gmpxx.dev
  ];
}
