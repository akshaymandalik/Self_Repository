#include<unistd.h>
#include<stdlib.h>
int main(){

    char ch;
    read(STDIN_FILENO,&ch,1);
    write(STDOUT_FILENO,&ch,1);

    exit(EXIT_SUCCESS);
}