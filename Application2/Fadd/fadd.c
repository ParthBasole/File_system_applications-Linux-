#include<stdio.h>
#include <dirent.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
 #include <unistd.h>

int main( int argc,char * argv[])
{
    if(argc!=3)
    {   printf("invalid number of argument");
         return -1;
    }
char buff[21]={0};
int fd=open(argv[1],O_RDWR);
if(fd==-1)
{
     printf("error opening file");
     close(fd);
     return -1;
}
int i=atoi(argv[2]);
lseek(fd,i,0);
if(read(fd,buff,20)==-1)
{
 printf("error reading file");
 close(fd);
 return -1;    
}
printf("%s",buff);
return 0;
}