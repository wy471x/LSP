#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

void test_read()
{
    char  word[255];
    memset(word, 0, sizeof(word));
    ssize_t nr;
    int fd;
    fd = open("file", O_RDONLY);
    if(fd == -1)
        perror("open error");
    nr = read(fd, &word, sizeof(unsigned long));
    if(nr == -1)
        perror("read error");
    printf("word = %s", word);
}

void test_read_r()
{
    int fd = open("china_daily.txt", O_RDONLY);

    if(fd == -1)
        perror("open error");

    int ret;
    int len = 255;
    char *buf = (char *)malloc(255);
    memset(buf, 0, 255);
    while(len != 0 && (ret = read(fd, buf, len)) != 0){
        if(ret == -1){
            if(errno == EINTR)
                continue;
            perror("read");
            break;
        }
        printf("buf = %s\n", buf);
        len -= ret;
        buf += ret;
    }
}

int main(void)
{
    test_read_r();
    return 0;
}

