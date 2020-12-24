#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
  int frk=fork();
  if(!frk)
  {int frk1=fork();
    if(frk1)
    {
        printf("Child Process 1 %d \n",getpid());
        printf("Parent Process 1 %d \n",getppid());
    }
    else
    {printf("Child Process 2 %d \n",getpid());
    printf("Parent Process 2 %d \n",getppid());     
    }
  }
  else{
   printf("Parent Process \n");
  }
}