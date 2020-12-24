#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h> 

struct Employee{
    char Name[20];
    char ID[2];
    char age[3];
    char Add[40];
    char BG[2];
};

int main(int argc,char * argv[])
{struct Employee em;
//em.Name={0};
memset(em.Name, 0, 20);
memset(em.ID, 0,2);
memset(em.age, 0, 3);
memset(em.Add, 0, 40);
memset(em.BG, 0, 2);
//char a[2]={0};
/*em.ID={0};
em.age={0};
em.Add={0};
em.BG={0};
*/
int fd =open(argv[1],O_RDONLY);
while(read(fd,em.Name,25))
{ 
    
write(1,em.Name,strlen(em.Name));
//printf("%s \n",em.Name);
read(fd,em.ID,5);
write(1,em.ID,strlen(em.ID));
//printf("%s \n",em.ID);
read(fd,em.age,7);
write(1,em.age,strlen(em.age));
//printf("%s\n",em.age);
read(fd,em.Add,48);
write(1,em.Add,strlen(em.Add));
//printf("%s\n",em.Add);
read(fd,em.BG,13);

write(1,em.BG,strlen(em.BG));

//lseek(fd,SEEK_CUR,2);
//printf("%s",em.BG);
memset(em.Name, 0, 20);
memset(em.ID, 0,2);
memset(em.age, 0, 3);
memset(em.Add, 0, 40);
memset(em.BG, 0, 2);
write(1,"\nDONE",5);
//printf("\n");
}

close(fd);
//printf("%s",getName(a,av));
return 0;
} 
