mmap:examples/mmap.c
	${CC} -o $@ $^
clean:
	-rm -f mmap
