 #include<stdio.h>
#include <dirent.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
 #include <unistd.h>

int main ( int argc,char *argv[])
{
if(argc!=2)
{  printf("Invalid Number of Argument");
     return -1;
}
int fd=creat(argv[1],0777);
write(fd," ",1);
lseek(fd,1024,SEEK_END);
write(fd," ",1);

close(fd);

return 0;
}

 
