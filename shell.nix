{ pkgs ? import <nixpkgs> {} }:

with pkgs;

mkShell.override { stdenv = pkgs.gcc14Stdenv; } {
  buildInputs = [
    pkgs.gcc14
    pkgs.gnumake
  ];

  nativeBuildInputs = [
    pkgs.clang-tools_18
    pkgs.gmpxx.dev
  ];
}
