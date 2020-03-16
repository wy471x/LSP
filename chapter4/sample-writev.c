#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <sys/uio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    struct iovec iov[3];
    ssize_t nr;
    int fd, i;

    char *buf[] = {
        "The term buccaneer comes from the word boucan.\n",
        "A boucan is a wooden frame used for cooking meat.\n",
        "Buccaneer is the West Indies name for a pirate.\n"
    };

    fd = open("buccaneer.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if(fd == -1){
        perror("open error");
        exit(1);
    }

    for(i = 0; i < 3; i++){
        iov[i].iov_len = strlen(buf[i]) + 1;
        iov[i].iov_base = buf[i];
    }
    
    nr = writev(fd, iov, 3);
    if(nr == -1){
        perror("writev");
        exit(1);
    }
    printf("wrote %ld bytes\n", nr);

    if(close(fd)){
        perror("close");
        return 1;
    }

    return 0;
}

