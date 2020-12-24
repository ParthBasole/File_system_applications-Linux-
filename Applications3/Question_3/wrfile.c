#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h> 
#include <dirent.h>
int main ( int argc,char *argv[])
{
DIR * fl;
struct dirent *dirq;
if (argc!=3)
{
 printf("enter valid number of arguments");    
return -1;
}
char buff[20]={0};
int fd=creat(argv[2],0777);
fl=opendir(argv[1]);
if(fl==NULL)
{
     printf("error opening the directory....check your path ");
return -1;
}
//char dl[2]="-t";
       while(( dirq= readdir(fl)) !=NULL)
     {
         
         if(dirq->d_type==DT_REG)
         { //strcpy(buff,do)
             write(fd,dirq->d_name,strlen(dirq->d_name));
           write(fd,"\n",1);
         }
              
    }    
   
closedir(fl);
return 0;
}
