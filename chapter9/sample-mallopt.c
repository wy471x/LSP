#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ret;
    ret = mallopt(M_MMAP_THRESHOLD, 64 * 1024);
    if(!ret)
        fprintf(stderr, "mallopt failed!\n");

    int len = 21;
    size_t size;

    char *buf;

    buf = malloc(len);
    if(!buf){
        perror("malloc");
        return -1;
    }

    size = malloc_usable_size(buf);
    printf("size = %ld\n", size);
    return 0;
}

