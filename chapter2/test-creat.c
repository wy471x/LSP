#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd;

    fd = creat("file", 0644);
    if(fd == -1)
        perror("creat error");

    fd = open("file2", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if(fd == -1)
        perror("open error");
    return 0;
}
