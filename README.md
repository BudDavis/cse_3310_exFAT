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



https://www.gnu.org/software/libc/manual/html_node/Example-of-Getopt.html



https://www.freecodecamp.org/news/how-to-use-git-and-github-in-a-team-like-a-pro/


 