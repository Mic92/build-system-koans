with import <nixpkgs> {};
mkShell {
  buildInputs = [
    sqlite
  ];
  nativeBuildInputs = [
    bashInteractive
    pkg-config
    zlib
    autoreconfHook
    autoconf-archive
  ];
  configureFlags = [
    "--with-sqlite3=${lib.getDev sqlite}"
  ];
}
