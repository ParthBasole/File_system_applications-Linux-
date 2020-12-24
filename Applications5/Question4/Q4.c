 
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() 
{
  int frk=fork();
    if(frk)
    {  printf("Master 1 ID: %d \n",getpid());
    printf("Master 1 Parent ID: %d \n",getppid());
    wait(NULL);
    }
    else 
    {
      int frk1=fork();
            if(frk1)
                {
                    wait(NULL);   
                
                    printf("CHILD 1 ID: %d \n",getpid());
    printf("CHILD 1 Parent ID: %d \n",getppid());
                }
            else {
                printf("CHILD 2 ID: %d \n",getpid());
                printf("CHILD 2 Parent ID: %d \n",getppid());
                }
    
   }
  return 0;
}
