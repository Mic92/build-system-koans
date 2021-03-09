#include "example.h"
#include <assert.h>
#include <stdio.h>

int main() {
    int rc = c_sqlite_test();
    if (rc) {
        perror("c_sqlite_test");
        return 1;
    }
    rc = c_zlib_test();
    if (rc) {
        perror("c_sqlite_test");
        return 1;
    }
    return 0;
}
