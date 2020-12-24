
                                                Given is the Third Assignment for marvellous infosystem   LSP batch
                                                
 Given Folder contains: 
 _____________________________________________________________________________________________________________________________________________________________________
 
 1)Checkf.c: 
            this program corresponds to following problem statement 
            in it opendir and readdir system calls are used to iterate in the directory file to and to check.
            iv) Write a program which accept directory name and file name from user and check whether that file is present in that directory or not.
 
 
 2)Copy.c:  this program corresponds to following problem statement
            v)Write a program which accept two file names from user and copy the contents of an existing file into newly created file.
            
            Description: This programs corresponds to copying one content of file to another file using read write and lseek system calls ...checked on .txt files
 
 3)link.c: this program corresponds to following problem statement 
            vi) Write a program which accept two directory names from user and move all files from source directory to destination directory.
            
            Description in this program the moving of file is done via link system call which creates HardLink to destination path in which every file is iterated same as checkf.c

4)ls.c :  this program corresponds to following statement
           i)Write a program which accept directory name from user and print all file names from that
              directory.
           ii). Write a program which accept directory name from user and print all file names and its
             types from that directory.
           
           Description: similar to ls function from console but adding -t infront of arguments will reveal types of the files

5)max_size.c: this program corresponds to following statement
             iii)Write a program which accept directory name from user and print name of such a file having largest size.
             
            Description: Checks the stats by using stat sytem calls and max value is found by iterating over all files present in directory except .. and . files.

6)rm_empty.c: this program corresponds to following statement
              vii)Write program which accept directory name from user and delete all empty files from that directory.
               
              Description:Checks all files present in directory by using stat and if size occupied is 0 or in case of text file first two characters are ' ' '\n' respectively it deletes that file by using system call unlink()  
