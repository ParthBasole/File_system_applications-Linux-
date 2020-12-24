#include<stdio.h>
#include <dirent.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
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
 char ptr[100];
 char ptr1[100];

 while(( dirq= readdir(fl)) !=NULL)
  {   strcpy(ptr,argv[1]);
      strcpy(ptr1,argv[2]);
      
      
    if (!(strcmp(dirq->d_name,"..")&&strcmp(dirq->d_name,".")))
    {

    }
    else{
      printf("%s \n",strcat(ptr,dirq->d_name));
        printf("copying");
    printf("%s \n",strcat(ptr1,dirq->d_name));
    if(link(ptr,ptr1)==-1)
    {
      printf("hardlink failed for %s",dirq->d_name);
    
    }
    
    }     
 } 

 printf("sucess!");     
    
     
closedir(fl);
return 0;
}
