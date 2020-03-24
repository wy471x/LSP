#define _GNU_SOURCE
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *cwd;

    cwd = get_current_dir_name();
    if(!cwd){
        perror("get_current_dir_name");
        exit(EXIT_FAILURE);
    }
    printf("current working directory : %s\n", cwd);
    free(cwd);
    return 0;
}

