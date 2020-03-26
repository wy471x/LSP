#include <malloc.h>
#include <stdio.h>
int main(void)
{
    struct mallinfo m;
    m = mallinfo();
    printf("free chunks: %d\n", m.ordblks);
    printf("fast bins: %d\n", m.smblks);
    malloc_stats();
    return 0;
}

