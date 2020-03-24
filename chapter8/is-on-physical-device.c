#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int is_on_physical_device(int fd)
{
    struct stat sb;
    int ret;

    ret = fstat(fd, &sb);
    if(ret){
        perror("fstat");
        return -1;
    }

    return gnu_dev_major(sb.st_dev);
}


int main(int argc, char *argv[])
{
    if(argc < 2){
        perror("args error");
        return 1;
    }
    int fd;
    if((fd = open(argv[1], O_RDONLY)) < 0){
        perror("open error");
        return 1;
    }
    
    if(is_on_physical_device(fd)){
        perror("This file isn't on physical device!");
        return -1;
    }
    return 0;
}

