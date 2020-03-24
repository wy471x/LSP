#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <grp.h>

int make_root_owner(int fd)
{
    int ret;

    ret = fchown(fd, 0, 0);
    if(ret)
        perror("fchown");
    return ret;
}

int main(void)
{
    int ret;
    int fd;
    if((fd = open("sample-fchown.file", O_RDONLY)) < 0){
        perror("open");
        return -1;
    }
    ret = make_root_owner(fd);
    return 0;
}

