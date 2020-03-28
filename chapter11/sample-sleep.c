#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    unsigned int s = 10;
    time_t start = time(NULL), end;
    while((s = sleep(s)))
        ;
    end = time(NULL);
    printf("sleep seconds = %ld\n", end - start);
    return 0;
}

