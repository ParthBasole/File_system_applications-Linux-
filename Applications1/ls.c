#include<stdio.h>
#include <dirent.h>
#include <string.h>
int main ( int argc,char *argv[])
{
DIR * fl;
struct dirent *dirq;
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
//char dl[2]="-t";
 
 
 if(argc==3)
 {
 if (!strcmp(argv[2],"-t"))    
  { while(( dirq= readdir(fl)) !=NULL)
   {
         printf("%s",dirq->d_name);
         
        switch (dirq->d_type)
        {
            case DT_BLK:
                printf("\t block");
                break;
            case DT_CHR:
                printf("\t chardev");
                break;
            case DT_DIR:
                printf("\t dir file");
                break;
            case DT_FIFO:
                printf("\t Pipe");
                break;
            case DT_LNK:
                printf("\t symbolic link");
                break;
            case DT_REG:
                printf("\t Regular file");
                break;
            case DT_SOCK:
                printf("\t SOCKET");
                break;
            case DT_UNKNOWN:
                printf("\t UNKNOWN");
                break;
        }
      printf("\n") ; 
   }    
   
   }
 }
   else {
       while(( dirq= readdir(fl)) !=NULL)
     {
          printf("%s \n",dirq->d_name);
       
      } 
     
     }

closedir(fl);
return 0;
}
