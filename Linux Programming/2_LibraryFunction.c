#include<stdio.h> /* Library Function: perror() */
#include<unistd.h> /* Header file for library function: access()*/
#include<stdlib.h>
#include<errno.h>
int main(int argc, char *args[]){

    int iRet = 0;

    iRet = access(args[1],F_OK);
    if(iRet == 0){

        iRet = access(args[1],R_OK); /* Checking for Read Permission*/

        if(iRet == 0){
            printf("File is Readable\n");
        }
        else{
            perror("Reading");
        }
        
        iRet = access(args[1],W_OK); /* Checking for Write Permission*/
        if(iRet == 0){
            printf("File is Writable\n");
        }
        else{
            perror("Writing");
        }

        iRet = access(args[1],X_OK); /* Checking for Execute Permission*/
        if(iRet == 0){
            printf("File is Executable\n");
        }
        else{
            perror("Executing");
        }


    }
    else{

        perror("Error");   
    }
    
    exit(0);
}

/*
access(): This function checks the accessibility of file with user
            who is accessing the given file.

Syntax: int <return_value> = access(<file_path>,<Parameter>)

MODES: 
    1) R_OK : Checks if the file is readable or not.
    2) W_OK : Checks if the file is writable or not.
    3) X_OK : Checks of the file is executable or not.
    4) F_OK : Check if the file exists or not.

Return Value: 
    0: On Success.
   -1: On Failure.

Errors: 
    ENAMETOOLONG: file_path is too long.
    EACCES: search permission denied for file_path.
    ELOOP : Too Many symbolic Links encountered in file_path.
    ENOTDIR : Provided DIR is not DIR in file_path.
    EINVAL: Invalid Mode Provided.

Replacement to remebering Errors:

    perror(const char *s): It generates the human readable error 
                          message by analyzing the errno. (Global Variable)
                          which is in <errno.h> header file.

*/