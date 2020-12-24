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
if (!(strcmp(dirq->d_name,"..")&&strcmp(dirq->d_name,".")))
    {

    }
else{
       int fd= open((dirq->d_name),O_RDWR);
 
 

      char buf[3]={0};
       if(fd==-1)
       {printf("error opening FILE %s",dirq->d_name);

       }
       int q=lseek(fd,0,SEEK_END);
       lseek(fd,0,0);
       //printf("%d ofeset \n",q);
         
       char *buff;
       if(q==2)
      { buff=malloc(sizeof(char)*(q+4));
       read(fd,buff,q);
       //printf("%s",buff);
       //printf("%d\n",strcmp(buff," \n"));
      }
       if((q==0)||((q==2)&&(!strcmp(buff," \n"))))   
       { 
           printf("%s  deleting \n",dirq->d_name);
           close(fd);
        unlink(dirq->d_name);   
       }
}
       //printf("\t %ld \n",Fstat.st_size);          
 }
 //printf("maximum sized file is %s  of size %d \t",str,max);

closedir(fl);
return 0;
}
