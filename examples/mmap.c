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
#include <stdlib.h>
#include <assert.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>

#include "disk_defs.h"

// int main(int argc, char *argv[])
int main()
{
   // open the file system image file
   int fd = open("test.image", O_RDWR);
   if (fd == -1)
   {
      perror("file open: ");
      exit(0);
   }

   printf("file descriptor = %d\n", fd);
   assert(fd > 0);

   // Take the pointer returned from mmap() and turn it into
   // a structure that understands the layout
   Main_Boot *MB = mmap(NULL,
                        sizeof(Main_Boot),
                        PROT_READ,
                        MAP_PRIVATE,
                        fd,
                        0);

   assert(MB);
   if (MB == (Main_Boot *)-1)
   {
      perror("error from mmap:");
      exit(0);
   }

   // print out some things we care about

   printf("%p  \n", MB);

   printf("The file system name is %s\n", MB->FileSystemName);

   // unmap the file
   if (munmap(MB, sizeof(Main_Boot)) == -1)
   {
      perror("error from unmap:");
      exit(0);
   }

   // close the file
   if (close(fd))
   {
      perror("closeStat:");
   }
   fd = 0;

   return 0;
}
