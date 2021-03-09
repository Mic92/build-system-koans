#include "example.h"

#include <stdio.h>
#include <zlib.h>
#include <sqlite3.h>

int c_zlib_test(void) {
    z_stream c_stream = {};
    int err = 0;

    err = deflateInit(&c_stream, Z_BEST_SPEED);
    if (err != 0) {
        return err;
    }
    return deflateEnd(&c_stream);
}

int c_sqlite_test(void) {
    sqlite3 *db;
    int rc = sqlite3_open(":memory:", &db);
    if (rc) {
        return rc;
    }
    sqlite3_close(db);
}
