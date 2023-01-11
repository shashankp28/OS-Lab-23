#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    char hello[] = "Hello World";
    while(hello[i] != '\0'){
        printf("character: %c, PID: %d\n", hello[i++], getpid());
        sleep(rand()%4 + 1);
        int child_pid = fork();
        if(child_pid>0) break;
    }
    return 0;
}