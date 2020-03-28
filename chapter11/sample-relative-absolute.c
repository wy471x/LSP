#include <time.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    struct timespec ts = { .tv_sec = 2, .tv_nsec = 0 };
    int ret;

    time_t start = time(NULL), end;
    ret =  clock_nanosleep(CLOCK_MONOTONIC, 0, &ts, NULL);
    if(ret){
        perror("clock_nanosleep");
        return -1;
    }
    end = time(NULL);
    printf("clock_nanosleep seconds = %ld\n", end - start);

    struct timespec ts2;
    
    ret = clock_gettime(CLOCK_MONOTONIC, &ts);
    if(ret){
        perror("clock_gettime");
        return -1;
    }

    start = time(NULL);
    ts.tv_sec += 10;
    printf("We want to sleep until sec=%ld nsec=%ld\n", ts2.tv_sec, ts2.tv_nsec);
    ret = clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &ts, NULL);
    if(ret)
        perror("clock_nanosleep");
    end = time(NULL);
    printf("clock_nanosleep seconds = %ld\n", end - start);

    return 0;
}

