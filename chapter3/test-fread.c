#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *stream;
    stream = fopen("test-fread.txt","r");
    char buf[64];
    size_t nr;

    nr = fread(buf, sizeof(buf)-1, 1, stream);
    buf[63] = '\0';
    printf("buf = %s\n", buf);
    if(nr == 0){
        perror("fread error");
        exit(1);
    }
    printf("buf = %s\n", buf);
    return 0;
}

