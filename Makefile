CC=gcc
CFLAGS=-Wall -g

all: librarytest

libmycode.o: libmycode.c mycode.h
	$(CC) $(CFLAGS) -c libmycode.c

librarytest: librarytest.c libmycode.o
	$(CC) $(CFLAGS) -o $@ $^libmycode

clean:
	rm -f *.so librarytest