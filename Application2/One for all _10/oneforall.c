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
DIR * fl;
struct stat Fstat;
struct dirent *dirq;
char str[100]; 
if (argc !=2)
{
 printf("enter valid number of arguments");    
return -1;
}
int fd2=creat("all.txt",0777);

printf("fd2 is %d \n",fd2);


if(fd2==-1)
{
printf("err");
return -1;
}
fl=opendir(argv[1]);

if(fl==NULL)
{
     printf("error opening the directory....check your path ");
return -1;
}
int max=0;
   while(( dirq= readdir(fl)) !=NULL)
   {
         printf("%s\n",dirq->d_name);  
        if( chdir(argv[1]) ==-1)
        {
            printf("cant change directoy ");
            return -1;
        }
        if(stat(dirq->d_name,&Fstat)==-1)
        {
             printf("cant get stat");
             return -1;
        }
if (!(strcmp(dirq->d_name,"..")&&strcmp(dirq->d_name,".")))
    {

    }
else{
       int fd= open((dirq->d_name),O_RDWR);

      char buf[10]={0};
       if(fd==-1)
       {printf("error opening FILE %s",dirq->d_name);

       }

        if(read(fd,buf,10)==-1)
        {
             printf("error reading");
        }
         write(fd2,buf,10);



      
       
    close(fd);   
}
       //printf("\t %ld \n",Fstat.st_size);          
 }
 //printf("maximum sized file is %s  of size %d \t",str,max);

close(fd2);
closedir(fl);
return 0;
}
