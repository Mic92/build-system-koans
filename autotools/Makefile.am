ACLOCAL_AMFLAGS = -I m4

lib_LTLIBRARIES = libexample.la
libexample_la_SOURCES = cpp-unit.cpp c-unit.c
# test pkg-config and autoconf-archive
libexample_la_CPPFLAGS = $(SQLITE3_CFLAGS) $(ZLIB_CFLAGS)
libexample_la_LIBADD = $(SQLITE3_LDFLAGS) $(ZLIB_LIBS)

TESTS = c-test cpp-test
check_PROGRAMS = c-test cpp-test

c_test_SOURCES = c-test.c
c_test_LDADD = $(builddir)/libexample.la

cpp_test_SOURCES = cpp-test.cpp
cpp_test_LDADD = $(builddir)/libexample.la
