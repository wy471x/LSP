#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c;
    FILE * stream;
    stream = fopen("test-fgetc.txt", "r");
    if(!stream){
        perror("fopen error");
        exit(1);
    }
    c = fgetc(stream);
    if(c == EOF) ;
    else printf("c=%c\n",(char)c);
    return 0;
}

