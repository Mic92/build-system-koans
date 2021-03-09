#include "example.h"

#include <iostream>
extern "C" {
  #include <zlib.h>
  #include <sqlite3.h>
}

int cpp_zlib_test(void) {
    z_stream c_stream = {};
    int err = 0;

    // check if we an find c++ header
    std::cout << zlib_version << std::endl;
    err = deflateInit(&c_stream, Z_BEST_SPEED);
    if (err != 0) {
        return err;
    }
    return deflateEnd(&c_stream);
}

int cpp_sqlite_test(void) {
    sqlite3 *db;
    int rc = sqlite3_open(":memory:", &db);
    if (rc) {
        return rc;
    }
    sqlite3_close(db);
}
