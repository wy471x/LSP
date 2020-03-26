#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("The current break point is %p\n", sbrk(0));
    return 0;
}
