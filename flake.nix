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
					] ++ (
						if pkgs.stdenv.isLinux then [
							valgrind
						] else []
					);
					
					shellHook = ''
						export DIRENV_LOG_FORMAT=""
						export NIX_SHOW_STATS=0
						export NIX_HIDE_STATS=1
						export CXX=clang++
						export CC=clang
						export CFLAGS="-std=c89 -Wall -Werror -Wextra"
						export CXXFLAGS="-std=cpp98 -Wall -Werror -Wextra"
						printf "\n\033[0;90mCPP env loaded for: \033[38;5;220m${system}\033[0m\n"
					'';
					};
				}
		);
}
