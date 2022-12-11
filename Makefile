CPPFLAGS=-Wall -O2 -std=c99 -g 
CPPINCS=-I./include
CC=gcc
mmap:examples/mmap.c
	${CC} ${CPPFLAGS} ${CPPINCS} -o $@ $^
clean:
	-rm -f mmap
