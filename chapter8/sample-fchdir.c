#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#define SOME_OTHER_DIR  "/home/dunk/share/LSP/chapter7/"
int main(void)
{
    int swd_fd;
    swd_fd = open(".", O_RDONLY);
    if(swd_fd == -1){
        perror("open");
        exit(EXIT_FAILURE);
    }
    int ret;
    ret = chdir(SOME_OTHER_DIR);
    if(ret){
        perror("chdir");
        exit(EXIT_FAILURE);
    }

    ret = fchdir(swd_fd);
    if(ret){
        perror("fchdir");
        exit(EXIT_FAILURE);
    }

    ret = close(swd_fd);
    if(ret){
        perror("close");
        exit(EXIT_FAILURE);
    }
    return 0;
}

