CC          = gcc
CFLAGS      = -Wall -Wpedantic -g --std=c99
INCLUDEDIRS = -I lib
SOURCEFILES = lib/date_algorithms.c src/main.c

main:
	$(CC) $(CFLAGS) $(INCLUDEDIRS) $(SOURCEFILES) -o bin/main.o

clean:
	rm -rf bin/*.o

.PHONY: clean
