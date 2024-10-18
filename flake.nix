{
  description = "tree-sitter-uiua dev shell";
  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
  inputs.flake-utils.url = "github:numtide/flake-utils";
  # inputs.uiua.url        = "github:uiua-lang/uiua";

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system: let
      pkgs = nixpkgs.legacyPackages.${system};
    in {
      devShells.default = pkgs.mkShell {
        packages = [
          pkgs.bashInteractive
          pkgs.nodejs_latest
          pkgs.iconv
          pkgs.uiua
          # uiua.packages.${system}.default
        ];
      };
    });
}
