#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <syslog.h>

void daedmon()
{ int frk=fork();

        if(frk>0)
        {
            exit(0);
        }
            else if(frk<0)
        {
            exit(0);
        }
      printf("%d \n",setsid());
      printf("%d \n",getppid());
      frk=fork();
      if(frk>0)
        {
            exit(0);
        }
            else if(frk<0)
        {
            exit(0);
        }
 //printf("%d \n",setsid());
      printf("%d \n",getppid());
        umask(0);
        chdir("/");
        for(int i=0;i<3;i++)
        {
            close(i);
        }
}

int main()
{ daedmon();
    sleep(4);


return 0;
}