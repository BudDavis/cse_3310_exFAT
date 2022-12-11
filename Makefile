CPPFLAGS=-Wall -std=c99 -O0 -g
mmap:examples/mmap.c
	${CC} -o $@ $^ 
clean:
	-rm -f mmap
