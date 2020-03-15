#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s;
    FILE *stream;
    stream = fopen("fgetc-implement-fgets-2.txt", "r");
    if(!stream){
        perror("fopen error");
        exit(1);
    }
    int c = 0;
    char str[255] = {0};
    if(!fgets(str, sizeof(str), stream)){
        perror("fgets error");
        exit(1);
    }
    printf("str = %s", str);
    memset(str, 0, sizeof(str));
    s = str;
    int n = 14;
    char d = '\n';
    fseek(stream, 0, SEEK_SET);
    while(--n > 0 && (c = fgetc(stream)) != EOF && (*s++ = c) != d);
    if (c == d){
        *--s = '\0';
    }
    else *s = '\0';
    printf("str = %s", str);
    return 0;
}

