#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h> 


int main(int argc,char * argv[])
{//struct Employee em;
//em.Name={0};
//memset(em.Name, 0, 20);
//memset(em.ID, 0,2);
//memset(em.age, 0, 3);
//memset(em.Add, 0, 40);
//memset(em.BG, 0, 2);
//char a[2]={0};
/*em.ID={0};
em.age={0};
em.Add={0};
em.BG={0};
*/
int fd =open(argv[1],O_RDONLY);
char a[1]={0};
int c=0;
while(c<20)
{while(a[0]!='\n')
{ if(read(fd,a,1)==0)
  {
    return 0;
  }
 write(1,a,1);
 //strcat()
}
if(read(fd,a,1)==0)
{
    return 0;
}
 write(1,a,1);
// write(1,"\",1);
c++;
}
//lseek(fd,SEEK_CUR,2);
//printf("%s",em.BG);
//memset(em.Name, 0, 20);
///memset(em.ID, 0,2);
//memset(em.age, 0, 3);
//memset(em.Add, 0, 40);
//memset(em.BG, 0, 2);
//write(1,"\nDONE",5);
//printf("\n");


close(fd);
//printf("%s",getName(a,av));
return 0;
} 
