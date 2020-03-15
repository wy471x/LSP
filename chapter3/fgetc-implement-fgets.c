#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *stream;
    stream = fopen("fgetc-implement-fgets.txt", "r");
    if(!stream){
        perror("fopen error");
        exit(1);
    }
    char *s;
    char str[255];
    s = str;
    memset(str, 0 , sizeof(str));
    int c;
    int n = 13;
    while( n > 0 && (c = fgetc(stream)) != EOF){
            *s++ = (char)c;
            n--;
    }
    *s = '\0';
    printf("str = %s\n", str);
    return 0;
}
