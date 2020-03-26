#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i;
    for(i = 0; i < 5; i++){
        char foo[i + 2];
        memset(foo, 'X', i+1);
        foo[i+1] = '\0';
        printf("foo = %s\n", foo);
    }
    return 0;
}

