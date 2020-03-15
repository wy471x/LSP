#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>


int main(void)
{
    FILE *stream;
    int fd;

    fd = open("/home/dunk/map.txt", O_RDONLY|O_CREAT, 0644);
    if(fd == -1){
        perror("open error");
        exit(1);
    }
    stream = fdopen(fd, "r");
    if(!stream){
        perror("fdopen error");
            exit(1);
    }

    return 0;
}

