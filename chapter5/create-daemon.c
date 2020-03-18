#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <limits.h>
int main(void)
{
    pid_t pid;
    int i;

    pid = fork();
    if(pid == -1){
        perror("fork");
        return (-1);
    }
    else if(pid != 0)
        exit(EXIT_SUCCESS);

    if(setsid() == -1)
        return (-1);

    if(chdir("/") == -1)
        return (-1);

    for(i = 0; i < _POSIX_OPEN_MAX; i++)
        close(i);

    open("/dev/null", O_RDWR);
    dup(0);
    dup(0);

    return 0;
}

