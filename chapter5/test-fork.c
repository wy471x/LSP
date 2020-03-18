#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    pid_t pid;

    pid = fork();
    if(pid == -1)
        perror("fork");

    if(!pid){
        char *const args[] = {"windlass", NULL};
        int ret;

        ret = execv("/bin/windlass", args);
        if(ret == -1){
            perror("execv");
            exit(EXIT_FAILURE);
        }
    }
    return 0;
}

