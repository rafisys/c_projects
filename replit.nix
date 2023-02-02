{ pkgs }: {
	deps = [
		pkgs.smlnj
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}