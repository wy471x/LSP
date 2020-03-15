#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    char buf[LINE_MAX];
    FILE *stream;
    stream = fopen("test-fgets.txt", "r");
    if(!stream){
        perror("fopen error");
        exit(1);
    }

    if(!fgets(buf, LINE_MAX, stream)){
        perror("fgets error");
        exit(1);
    }
    printf("buf = %s\n", buf);
    return 0;
}

