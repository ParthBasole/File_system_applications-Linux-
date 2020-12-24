#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() 
{
     int frk=fork();
  if(frk)
  {  int frk1=fork();
      
      if(frk1)
      {wait(NULL);   
      }
       else {
              printf("CHILd 2 ID: %d \n",getpid());
        printf("CHILd 2 Parent ID: %d \n",getppid());

       }

    wait(NULL);
  }
  else {
   printf("CHILd 1 ID: %d \n",getpid());
   printf("CHILd 1 Parent ID: %d \n",getppid());
  }
  return 0;
}
