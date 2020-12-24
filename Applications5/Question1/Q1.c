#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
   #include <sys/types.h>
       #include <sys/wait.h>
//////
////
///
int main()
{
    int status;
int frk=fork();
    int child=0;
    if(frk)
    {
       printf("Inside Parent Process %d \n",frk);
       while((child=wait(NULL))!=-1)
       printf("%d\n",child);
    
       printf("no children \n");

    }
    else{//printf("Inside Child Process ");
     // printf("%d \n",getppid());
    }
       


}////////