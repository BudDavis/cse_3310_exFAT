```
dd if=/dev/zero of=zzz count=1 bs=1G
yum install -y exfat-utils fuse fuse-exfat
losetup /dev/loop0 diskimage 
mount /dev/loop0 /mnt
umount /mnt
```
https://pawitp.medium.com/notes-on-exfat-and-reliability-d2f194d394c2


https://learn.microsoft.com/en-gb/windows/win32/fileio/exfat-specification


https://uta.service-now.com/selfservice?id=ss_kb_article&sys_id=KB0011414


https://nemequ.github.io/munit/#download



Plan:

 single document that defines the rules of the project, how it is turned in, etc.
 
 
 *makefile
 *src/test
 *src/extern
 *scripts/
 *bin/
 *lib/
 *data/
 
 
 objectives:
 
 use github codespaces
 use uta student github.
 
 have automated testing from the begining
 run a rule at checkin to test
 base repository, all students will clone.
 i will do the project in another repository
 
 # Development Plan
 This project will be delivered in four Iterations
 * Iteration 1 Basic Functionality
 * Iteration 2 Defrag
 * Iteration 3 Hard Links
 * Iteration 4 Resize
 ## What is turned in:
 * accountability spreadsheet
 * requirements spreadsheet
 * the github hash of the version to be turned in
 * the github repository
 ## Grading Rubrics
 * 
 Jan 17th, 28 April
 ## Development Environment
 
 
 # User requirements
 FAText_utils is a command line program to manipulate extFAT disk images. The below requirements will require analysis, clarification and refinement to support the development process.  These lower level requirements will be documented in the Requirements Spreadsheet.
 1.  FAText_utils shall read a disk image, and dump all information except the file contents to stdout in a human readable format.
 2.  All inputs will be provided via the command line. Reasonable defaults will be assumed.
 3.  FAText_utils shall read adisk image, and de-frag the volume in an optimum way.
 4.  
 
 
 # Compile
 To compile this, do the following:
 
 
