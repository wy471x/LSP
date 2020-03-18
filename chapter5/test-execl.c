#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
int main()
{
    pid_t pid;

    if((pid = fork()) > 0){
        printf("parent pid=%d\n", getpid());
    }else if(pid == 0){
        printf("child pid=%d\n", getpid());
        execl("/bin/vi", "vi", "/home/dunk/share/LSP/chapter5/hooks.txt", NULL);
    }
    return 0;
}

