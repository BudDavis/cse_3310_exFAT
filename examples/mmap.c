 /*

    This is an example of using mmap to read an extFAT image file.

    To make the sample file:

     % # create the file system image
     % dd if=/dev/zero of=test.image count=1 bs=1G
     % sudo losetup /dev/loop2 test.image
     % sudo /usr/sbin/mkexfatfs /dev/loop2

     % # put something in the file system image
     % mkdir /tmp/d
     % sudo mount /dev/loop2 /tmp/d
     % cp examples/mmap.c /tmp/d

     % # clean up
     % sudo umount /tmp/d
     % sudo losetup -d /dev/loop2
     % rm -rf /tmp/d
     % rm test.image



    Written by Bud Davis, jimmie.davis@uta.edu
    (c) 2023, All Rights Reserved
    Provided to students of CSE3310, UTA. Any use
    other than this course is prohibited.

*/
 
#include <stdio.h>
#include <assert.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>


int main(int argc, char *argv[])
{

    // open the file system image file
    int fd = open("test.image",O_RDWR);
    printf("file descriptor = %d\n",fd);
    assert(fd);
    
    // mmap it
    void *p = mmap(NULL,
                      0,
                   PROT_NONE,
                   0,
                   fd,
                   0);
    assert(p);

    // print out some things we care about


    printf("hello\n");
    int closeStat = close(fd);
    if (closeStat)
       perror("closeStat");
    fd = 0;
    return 0;
}
