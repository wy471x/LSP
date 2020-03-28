#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <time.h>

int main(void)
{
    errno = 0;
    time_t start = time(NULL), end;
    usleep(2000000);
    if(errno)
        perror("usleep");
    end = time(NULL);
    printf("sleep seconds = %ld\n", end - start);
    return 0;
}

