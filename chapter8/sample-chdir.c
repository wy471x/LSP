#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#define SOME_OTHER_DIR  "/home/dunk/share/LSP/chapter7"
int main(void)
{
    char *swd;
    int ret;

    swd = getcwd(NULL, 0);
    if(!swd){
        perror("getcwd");
        exit(EXIT_FAILURE);
    }

    ret = chdir(SOME_OTHER_DIR);
    if(ret){
        perror("chdir");
        exit(EXIT_FAILURE);
    }
    char *nwd;
    nwd = getcwd(NULL, 0);
    printf("nwd = %s\n", nwd);


    ret = chdir(swd);
    if(ret){
        perror("chdir");
        exit(EXIT_FAILURE);
    }

    free(nwd);
    free(swd);
    return 0;
}

