#include <unistd.h>
#include <stdio.h>

int main(void)
{
    long hz;

    hz = sysconf(_SC_CLK_TCK);
    if(hz == -1)
        perror("sysconf error");
    printf("hz = %ld\n", hz);
    return 0;
}

