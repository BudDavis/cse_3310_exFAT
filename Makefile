
INCLUDES=./include/disk_defs.h

CPPFLAGS=-Wall -Wextra -O2 -std=c99 -g3 
CPPINCS=-I./include


all:mmap fread

mmap:examples/mmap.c  
	${CC} ${CPPFLAGS} ${CPPINCS} -o $@ $^

fread:examples/fread.c  
	${CC} ${CPPFLAGS} ${CPPINCS} -o $@ $^

clean:
	-rm -f mmap fread

