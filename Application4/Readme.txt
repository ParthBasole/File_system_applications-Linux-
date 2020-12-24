                                                        


                                            
This Folder contains 
(use usage in makefile) 

_____________________________________________________________________________________________________________________________________________________________________

1)Greater: 
   Description :  This program uses same skeleton as the stat program in which it checks its size and writes those file name to terminal
 
 
2)Hole1k:
  
  Description:This program creates a file into desired location and adds 1024 bytes of hold using lseek to generate offset of 1024 after end and then marks it off with null character.
  
  
3) Create:
   Description:Takes directory from user and in another argument it asks for the name of file which is then created using creat system call.


4) Delete100: 
   
   Description:This program works similar to greater one the exception being that when the size exceeds the 100 bytes unlink system call is used to delete the hardlink of that file in that directory.
   
5) rmdta:
   Description : This program takes two parameter one name of the file which needs to be opened with its path and second the offset number which is then used by truncate linux function to shorten the file upto certain offset

6) 1kbfix:
   
   Description:This program takes one parameter that is directory name and then checks size of each file if its greater than 1kb it truncates it to 1kb if its lesser than 1kb it is then filled by using concept of holes.which is done by using lseek system call and truncate Linux Function
 
