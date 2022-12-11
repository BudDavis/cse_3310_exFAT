CPPFLAGS=""
COPTS="-Wall -std=c99"
mmap:examples/mmap.c
	${CC} -o $@ $^ 
clean:
	-rm -f mmap
