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
if ((argc <2)||(argc>4))
{
 printf("enter valid number of arguments");    
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
        // printf("%s",dirq->d_name);  
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
       //printf("\t %ld \n",Fstat.st_size);   
      if(Fstat.st_size>10)
      { write(1,dirq->d_name,strlen(dirq->d_name));
       write(1,"\n",1);
      }  
 }
 //printf("maximum sized file is %s  of size %d \t",str,max);

closedir(fl);
return 0;
}

