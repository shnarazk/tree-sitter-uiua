{
  description = "tree-sitter-uiua dev shell";
  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
  inputs.flake-utils.url = "github:numtide/flake-utils";
  inputs.uiua.url        = "github:uiua-lang/uiua";

  outputs = { self, nixpkgs, flake-utils, uiua }:
    flake-utils.lib.eachDefaultSystem (system: let
      pkgs = nixpkgs.legacyPackages.${system};
    in {
      devShells.default = pkgs.mkShell {
        packages = [
          pkgs.bashInteractive
          pkgs.nodejs-18_x
          pkgs.iconv
          uiua.packages.${system}.default
        ];
      };
    });
}
