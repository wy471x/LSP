#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    fp = fopen("test-fcloseall.txt", "w");
    if(!fp){
        perror("fopen error");
        exit(1);
    }
    fcloseall();
    return 0;
}

