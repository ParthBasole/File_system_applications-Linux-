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
struct stat STT;
DIR * f1;
struct dirent *dirq;

f1=opendir(argv[1]);

if(f1==NULL)
{
     printf("error opening the directory");
     return -1;
}


while((dirq=readdir(f1))!=NULL)
{ if(chdir(argv[1])==-1)
{
    printf("check directory or path of it");
    closedir(f1);
    return -1;
}

if ((strcmp(".",dirq->d_name))&&(strcmp("..",dirq->d_name)))
   { int fd=open(dirq->d_name,O_RDWR);
      printf("%s \n",dirq->d_name);
      if(fd==-1)
      {
        printf("coudnt open file %s",dirq->d_name);
        closedir(f1);
               return -1;
      }
      
      if(fstat(fd,&STT)==-1)
      {     printf("coudnt get stat of file %s",dirq->d_name);
             close(fd);
            closedir(f1);
               return -1;
      }
        if(STT.st_size>1)
    { ftruncate(fd,1024);
        }
    else if(STT.st_size<1)
    { int q=lseek(fd,0,SEEK_END);
       lseek(fd,(1024-q),SEEK_CUR);
       write(fd,"\0",1);
       
    }
    close(fd);
   }
}



return 0;
}

 
 
