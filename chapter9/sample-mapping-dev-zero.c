#include <sys/mman.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    void *p;
    int fd;

    fd = open("/dev/zero", O_RDWR);
    if(fd < 0){
        perror("open");
        return -1;
    }

    p = mmap(NULL, getpagesize(), PROT_READ | PROT_WRITE, MAP_PRIVATE, fd, 0);

    if(p == MAP_FAILED){
        perror("mmap");
        if(close(fd))
            perror("close");
        return -1;
    }

    if(close(fd))
        perror("close");

    printf("/dev/zero mapping address : %p\n", p);

    return 0;
}

