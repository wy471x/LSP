#include <func.h>

int main(void)
{
    int status;
    pid_t pid;

    if(!fork()){
        abort();
        //return 1;
    }

    pid = wait(&status);
    if(pid == -1)
        perror("wait");

    printf("pid=%d\n", pid);

    if(WIFEXITED(status))
        printf("Normal termination with exit status=%d\n", WEXITSTATUS(status));

    if(WIFSIGNALED(status))
        printf("Killed by signal=%d%s\n", WTERMSIG(status), WCOREDUMP(status) ? 
               " (dump core)" : "");

    if(WIFSTOPPED(status))
        printf("Stopped by signal=%d\n", WSTOPSIG(status));

    if(WIFCONTINUED(status))
        printf("Continued\n");

    return 0;
}

