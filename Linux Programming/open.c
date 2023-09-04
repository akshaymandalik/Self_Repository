#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> /* Most of the System calls */
int main(int argc,char *argv[]){

    int fd = 0;
    fd = open(argv[1],O_RDONLY);  /* We can use 2nd Library function before this statement*/
    if(fd == -1){
        perror("Error");
    }
    else{
        printf("File Opened Succefully\n");
    }

    exit(0);
}