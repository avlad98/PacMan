CC=gcc
CFLAGS=-Wall

build: task1 pacman

task1: task1.c
	$(CC) $(CFLAGS) $^ -o $@

pacman: pacman.c
	$(CC) $(CFLAGS) $^ -o $@

clean: task1 pacman
	rm -f $^
