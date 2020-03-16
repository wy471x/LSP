#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *stream;

    stream = fopen("journal.txt", "a");
    if(!stream){
        perror("fopen error");
        exit(1);
    }
    if(fputs("The ship is made of wood.\n", stream) == EOF){
        perror("fputs error");
        exit(1);
    }
    if(fclose(stream) == EOF){
        perror("fclose error");
        exit(1);
    }
    return 0;
}

