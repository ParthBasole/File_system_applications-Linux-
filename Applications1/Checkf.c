#include<stdio.h>
#include <dirent.h>
#include <string.h>
int main ( int argc,char *argv[])
{
DIR * fl;
struct dirent *dirq;
if (argc!=3)
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
 while(( dirq= readdir(fl)) !=NULL)
  { //printf("%s \n",dirq->d_name);
    if(!strcmp(dirq->d_name,argv[2]))
    {
        printf("Found!");
      return 0;
    }        
 } 

 printf("not found");     
    
     
closedir(fl);
return 0;
}
