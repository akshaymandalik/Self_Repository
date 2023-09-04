#include<stdlib.h> 

int main(){


    exit(0);
}

/*
Syntax: 
exit(EXIT_STATUS/Termination_Status)


Parameters:
0: Indicates that a process completed successfully.
Non Zero: Indicates that a process teminated unsuccessfully.

Macros:
EXIT_SUCCESS : 0
EXIT_FAILURE : 1

Why Should Use?
1. It is Available with every C Implementation.
2. It flushes stdio stream buffers.
3. Performs/Executes exit handler.


Conclusion: Use Library function exit() which 
performs above tasks and internally call _exit() system 
with given status.

*/