#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
 #include <unistd.h>
#include <errno.h> 

int main(int argc,char * argv[]) 
{


if(argc!=3)
{ printf("<,,,");
     return -1;
}


printf("start");

char arg[100]={0};
int fd=open(argv[2],O_RDWR);
if(fd==-1)
{
    printf("File not opened");
    return -1;
}
if(!strcmp("ac",argv[1]))
{
 if(!read(1,arg,90))
 {
      printf("no bytes read \n");
 }

 if(! write(fd,arg,90))
 {
  printf("no bytes wrote \n");
 }
 
 printf("\n___%s_____\n ",arg);
}

        else if(!strcmp("ca",argv[1]))
        {  printf("___");
        while(read(fd,arg,10)>0)
        {
        if(write(2,arg,strlen(arg)))
        {
           // printf("writing....\n");
        }
        }
        }
else{

    close(fd);
return -1;
}
   close(fd);

return 0;
} 
