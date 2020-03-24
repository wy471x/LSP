#define _XOPEN_SOURCE_EXTENDED
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#define BUF_LEN 255
int main(void)
{
    char cwd[BUF_LEN];

    if(!getcwd(cwd, BUF_LEN)){
        perror("getcwd");
        exit(EXIT_FAILURE);
    }
    printf("current working directory : %s\n", cwd);
    return 0;
}

