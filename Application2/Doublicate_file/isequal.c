#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
 #include <unistd.h>
#include <errno.h> 
int main(int argc,char * argv[]) 
{char buff1[1024]={0};
 char buff2[1024]={0};
     if(argc!=3)
     {
          printf("not enough arguments");
          return -1;
     }

  int fd1=  open(argv[1],O_RDWR);
  int fd2= open(argv[2],O_RDWR);
  if((fd1==-1)||(fd2==-1))
  {
       printf("file decriptor not allocated");
  }

int j=1,k=1;  
   while((j)||(k))
   { //printf("%s \n",buff1);
       // printf("%s \n",buff2);
        j=read(fd1,buff1,1000);
        k=read(fd2,buff2,1000);

        if(strcmp(buff1,buff2)!=0)
        {printf("%d \n",j);
        printf("%d \n",k);
            printf("cmp %d ",strcmp(buff1,buff2));
            printf("not equal");
            close(fd1);
            close(fd2);  
            return -1;
        }
     
   }
close(fd1);
close(fd2);

printf("equal");
return 0;


}