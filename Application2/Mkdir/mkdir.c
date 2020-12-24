#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
 #include <unistd.h>
#include <errno.h> 

int main(int argc,char * argv[]) 
{


if(argc!=2)
{ printf("not enough arguments");
     return -1;
}

if(mkdir(argv[1],0777)==-1)
{     
    printf(" error creating directory ");
     return -1;
}

printf("directory creatd ");

return 0;
} 
