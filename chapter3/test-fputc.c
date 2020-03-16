#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *stream;
    stream = fopen("test-fputc.txt","w");
    if(!stream){
        perror("fopen error");
        exit(1);
    }
    if(fputc('p', stream) == EOF){
        perror("fputc error");
        exit(1);
    }
    return 0;
}

