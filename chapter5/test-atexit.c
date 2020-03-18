#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
void test_sysconf()
{
    long atexit_max;

    atexit_max = sysconf(_SC_ATEXIT_MAX);
    printf("atexit_max=%ld\n", atexit_max);
}

void out(void)
{
    printf("atexit() succeeded!\n");
}

int main(void)
{
    //test_sysconf();
    if(atexit(out))
        fprintf(stderr, "atexit() failed!\n");
    return 0;
}

