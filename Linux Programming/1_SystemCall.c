 /* Header File used for 
 System Call _exit() */
#include<unistd.h>

int main(){

    
    _exit(0); /* Terminates the calling process immediately */
}

/*
Syntax: 
_exit(EXIT_STATUS/Termination_Status)


Parameters:
0: Indicates that a process completed successfully.
Non Zero: Indicates that a process teminated unsuccessfully.

Macros:
EXIT_SUCCESS : 0
EXIT_FAILURE : 1

Why Should not be Use?
1. It is unix Specific.
2. It does not flushes stdio stream buffers.
3. Immediately terminates so does not perform any exit handler.


Conclusion: Use Library function exit() which 
performs above tasks and internally call _exit() system 
with given status.
*/