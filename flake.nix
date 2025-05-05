{
	description = "Shell for 42 cpp";

	inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
	inputs.flake-utils.url = "github:numtide/flake-utils";

	outputs = { self, nixpkgs, flake-utils }:
		flake-utils.lib.eachDefaultSystem (system:
			let
				pkgs = import nixpkgs {
					inherit system;
				};
			in {
				devShells.default = pkgs.mkShell {
					name = "cpp-42";
					buildInputs = with pkgs; [
						clang
						clang-tools
					];
					
					shellHook = ''
						export CXX=clang++
						export CC=clang
					'';
					};
				}
		);
}
