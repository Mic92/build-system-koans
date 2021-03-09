This tests pkg-config to retrieve zlib
as well as autoconf-archive with sqlite

## To build

``` sh
autoreconf -fi && ./configure $configureFlags
make 
```

## Run tests
``` sh
make check
```
