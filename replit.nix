{ pkgs }: {
	deps = [
		pkgs.sudo
  pkgs.python39Packages.softlayer
  pkgs.cmatrix
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}