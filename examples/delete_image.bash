#/bin/bash
# this script is designed to make images to assist in developing and
# testing the program(s)
dd if=/dev/zero of=test.image count=1 bs=1G
sudo losetup /dev/loop2 test.image
sudo /usr/sbin/mkexfatfs /dev/loop2