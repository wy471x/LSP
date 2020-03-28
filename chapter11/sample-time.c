#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    time_t t;

    printf("current time: %ld\n", (long)time(&t));
    printf("the same value: %ld\n", (long)t);

    return 0;
}

