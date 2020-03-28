#include <time.h>
#include <sys/select.h>
#include <stdio.h>

int main(void)
{
    struct timeval tv = {.tv_sec = 2, .tv_usec = 0};

    time_t start = time(NULL), end;
    select(0, NULL, NULL, NULL, &tv);
    end = time(NULL);
    printf("select seconds = %ld\n", end - start);
    return 0;
}

