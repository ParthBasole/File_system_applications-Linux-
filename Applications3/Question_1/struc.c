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




int main(int argc ,char* argv[]) 
{ struct Employee emp1;
  memset(emp1.Name, 0, 20);
memset(emp1.ID, 0,2);
memset(emp1.age, 0, 3);
memset(emp1.Add, 0, 40);
memset(emp1.BG, 0, 2);

   if(argc!=2)
   {
        return -1;
   }
char buff[50]={};
int fd=open(argv[1],O_RDWR|O_APPEND);
if(fd==-1)
{
    printf("Can't Read File\n");
    return -1;
}
if(write(1,"Name:",5)==-1)
{
    printf("Cant Write on Console\n");
    return -1;
}
if(read(0,emp1.Name,20)==-1)
{
    printf("Cant Read Console\n");
    return -1;
}

if(write(fd,emp1.Name,strlen(emp1.Name))==-1)
{
    printf("Cant Write in file \n");
    return -1;
}
write(1,"ID:",3);
//buff={0};
read(0,emp1.ID,3);
write(fd,"ID:",3);
write(fd,emp1.ID,strlen(emp1.ID));

write(1,"age:",4);
//buff={0};
read(0,emp1.age,3);
write(fd,"age:",4);
write(fd,emp1.age,strlen(emp1.age));
write(1,"Address:",8);
//buff={0};
read(0,emp1.Add,40);
write(fd,"Address:",8);
write(fd,emp1.Add,strlen(emp1.Add));
write(1,"BloodGroup:",11);
//buff={0};
read(0,emp1.BG,2);
write(fd,"BloodGroup:",11);
write(fd,emp1.BG,strlen(emp1.BG));
write(fd,"\n",2);


close(fd);

}
