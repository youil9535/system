                             
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
                  
int main(void) {
    struct stat buf;

    stat("unix.txt", &buf);

    printf("Inode = %d\n", (int)buf.st_ino);
printf("Mode  = %o\n", (unsigned int)buf.st_mode);
printf("Nlink = %o\n", (unsigned int)buf.st_nlink);
printf("UID  = %d\n", (int)buf.st_uid);
printf("GID = %d\n", (int)buf.st_gid);
printf("SIZE = %d\n", (int)buf.st_size);
printf("Atime = %d\n", (int)buf.st_atime);
printf("Mtime = %d\n", (int)buf.st_mtime);
printf("Ctime = %d\n", (int)buf.st_ctime);
printf("Blksize = %d\n", (int)buf.st_blksize);
printf("Blocks = %d\n", (int)buf.st_blocks);

      return 0;
}
// user@user:~$ ./ex3_1
// Inode = 64
// Mode  = 4000
// Nlink = 400
// UID  = 0
// GID = 6291456
// SIZE = 2048
// Atime = 8388608
// Mtime = 1117338520
// Ctime = 0
// Blksize = 32768
// Blocks = 8388608
