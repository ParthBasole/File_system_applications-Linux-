#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(int argc ,char *argv[])
{
 if(argc!=3)
 {
     printf("Invalid Number of Arguments");
     return -1;
 }
  if(chdir(argv[1]))
  { printf("error changing directory");
  return -1;
      
}
  if(creat(argv[2],0777)==-1)
  { printf("error creating file in given directory");
   return -1;
}
  //close(fd);
    return 0;
}
