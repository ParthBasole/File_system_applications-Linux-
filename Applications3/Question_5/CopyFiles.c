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
if (argc !=3)
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
         char dir[100]={0};
         strcpy(dir,argv[2]);
         strcat(dir,dirq->d_name);

       
       int  fd2=creat(dir,0777);       
      char buff[1024]={0};
       if(fd==-1)
       {printf("error opening FILE %s",dirq->d_name);

       }
       while(read(fd,buff,1024))
       {write(fd2,buff,strlen(buff));
        //buff[1024]={0};
        memset(buff, 0, 1024);

       }
   


      
       
    close(fd);
    close(fd2);   
}
       //printf("\t %ld \n",Fstat.st_size);          
 }
 //printf("maximum sized file is %s  of size %d \t",str,max);

//close(fd1);
//close(fd2);
closedir(fl);
return 0;
}
