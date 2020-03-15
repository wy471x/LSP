#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

void test_fopen()
{
    FILE *stream;

    stream = fopen("/etc/manifest", "r");
    if(!stream){
        perror("fopen error");
        exit(1);
    }
}

int main(void)
{
    test_fopen();
    return 0;
}

