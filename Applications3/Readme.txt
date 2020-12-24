                                                        



This Folder contains 
(use usage in makefile) 

_____________________________________________________________________________________________________________________________________________________________________

1)struc: 
   Description :  This program has inbuild structure name employee in it which take input via system calls and stores that information onto a file on user described position via CLI
 
 
 
 
2)Remp2/Remp:
  
  Description:This Program simply prints the structure which was printed in the file.
  
  NOTE: I Was unclear about specifics of the questions so i made two programs Remp and Remp 2 in which first one stores the file values into a user defined structure and the latter one just prints all the data of the file.
  
   BUG: values of bytes to be written are hardcoded in Remp so in few examples stack smashing occured.
  
  
3) Wrfile:
   Description:Take information from linux function readdir and using d_type variable in the dirent structure regular files are written in the user specified location 


   
4) todir: 
   
   Description:This program takes information in 1024 character buffer and stores it in file name AllCombine in the program directory
   
5) CopyFiles:
   Description : This program takes two directory one being source other being destination and copies infromation from one to another by using 1024 bytes of buffer same as todir program but file name similar to source directory are created in destination directory hence copying files of folder in true essence
 
 
