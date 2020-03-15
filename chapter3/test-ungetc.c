#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE * stream;
    stream = fopen("test-ungetc.txt", "r");

    if(!stream){
        perror("fopen error");
        exit(1);
    }

    int c = fgetc(stream);
    printf("c=%c\n",(char)c);
    //ungetc(c, stream);
    c = fgetc(stream);
    printf("c=%c\n", (char)c);
    return 0;
}

