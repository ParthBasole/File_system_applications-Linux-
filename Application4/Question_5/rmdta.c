#include<stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>


int main(int argc,char * argv[]) 
{ if(argc!=3)
{
     printf("invalid number of arguments");
     return -1;
}
 int i= truncate(argv[1],atoi(argv[2]));
if (i==-1)
{
    printf("truncation failed!");
}
printf("truncated");
return 0;
}
