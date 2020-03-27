#include <sys/types.h>
#include <signal.h>
#include <stdio.h>

int main(void)
{
    int ret;

    ret = kill(1722, 0);
    if(ret)
        printf("we lack permission!\n");
    else
        printf("we have permission!\n");

    return 0;
}

