#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{ 
  if (argc!=3)
  {
      printf("invalid arguments");
      return -1;
  }
    int fd=-1;
    int fd1=-1;
    fd=open(argv[1],O_RDWR);
    fd1=creat(argv[2],777);
    int q = lseek(fd,0,SEEK_END);
    lseek(fd,0,0);
    char *buff;
    buff=malloc(sizeof(char)*(q+4));
    if(read(fd,buff,q)==-1)
    {
        printf(" cant copy data !");
        return -1;
    } 
     
printf("%s",buff);


    if(write(fd1,buff,q)==-1)
    {
        printf(" cant write data !");
        return -1;
    }  
     printf("success!"); 
close(fd1);
close(fd);

return 0;

}
