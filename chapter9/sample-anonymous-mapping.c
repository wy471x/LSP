#include <sys/mman.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    void *p;
    p = mmap(NULL, 512 * 1024, PROT_READ | PROT_WRITE, 
             MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);

    if(p == MAP_FAILED)
        perror("mmap");
    else
        printf("anonymous mapping address : %p\n", p);

    int ret;

    ret = munmap(p, 512 * 1024);
    if(ret)
        perror("munmap");

    return 0;
}

