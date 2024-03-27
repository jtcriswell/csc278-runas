CC := clang
CFLAGS := -Ilibcap-2.25/libcap/include
CAPDIR := libcap-2.25/libcap

all: runas switchto

caplib:
	cd libcap-2.25 ; $(MAKE) -e BUILD_GPERF=no

runas: caplib runas.c priv.c priv.h
	$(CC) $(CFLAGS) -static -o runas runas.c priv.c $(CAPDIR)/libcap.a

switchto: switchto.c
	$(CC) $(CFLAGS) -static -o switchto switchto.c

clean:
	cd libcap-2.25 ; $(MAKE) -e BUILD_GPERF=no clean
	rm -f runas

