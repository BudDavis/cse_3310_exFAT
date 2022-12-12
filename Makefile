# for this project, there is only one makefile
#
# this makefile is expected to be run from the project 
# root.
#
# all executables are expected to be ran from the project 
# root.
#
# this makefile will clean up when asked politely
#
# No intermediate .o files or libraries are created



INCLUDES=./include/disk_defs.h

CPPFLAGS=-Wall -Wextra -O2 -std=c99 -g3 
CPPINCS=-I./include


all:mmap fread unit_tests


# unit tests
unit_tests: munit_example

munit_example:unit_tests/munit/example.c
	${CC} ${CPPFLAGS}  unit_tests/munit/munit.c -I./unit_tests/munit/ ${CPPINCS} -o $@ $^

# requirements tests





# example code
mmap:examples/mmap.c  
	${CC} ${CPPFLAGS} ${CPPINCS} -o $@ $^

fread:examples/fread.c  
	${CC} ${CPPFLAGS} ${CPPINCS} -o $@ $^

clean:
	-rm -f mmap fread munit_example

