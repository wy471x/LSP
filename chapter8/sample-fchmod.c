#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <fcntl.h>
int main(void)
{

    int ret, fd;
    if((fd = open("sample-fchmod.file", O_RDONLY)) < 0){
        perror("open error");
    }
    ret = fchmod(fd, S_IRUSR | S_IWUSR);
    if(ret){
        perror("chmod");
        return 1;
    }
    return 0;
}

