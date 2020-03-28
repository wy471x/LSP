#include "lsp.h"
#include <stdio.h>

static inline int max2(int a, int b)
{
    if(a > b)
        return a;
    return b;
}

int main(void)
{
    printf("max = %d\n", max2(6, 5));
    return 0;
}

