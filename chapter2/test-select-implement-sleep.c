#include <func.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/select.h>

int main()
{
    time_t start = time(NULL);
    struct timeval tv;
    tv.tv_sec = 5;
    tv.tv_usec = 0;
    select(0, NULL, NULL, NULL, &tv);
    time_t end = time(NULL);
    printf("used seconds : %ld s\n", end - start);
    return 0;
}

