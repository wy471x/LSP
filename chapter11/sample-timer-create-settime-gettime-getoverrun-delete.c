#define _POSIX_C_SOURCE 199309
#include <signal.h>
#include <time.h>
#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>

int main(void)
{
    timer_t timer;
    int ret;
    ret = timer_create(CLOCK_PROCESS_CPUTIME_ID, NULL, &timer);
    if(ret){
        perror("timer_create");
        return -1;
    }

    struct itimerspec ts;
    ts.it_interval.tv_sec = 1;
    ts.it_interval.tv_nsec = 0;
    ts.it_value.tv_sec = 1;
    ts.it_value.tv_nsec = 0;

    ret = timer_settime(timer, 0, &ts, NULL);
    if(ret){
        perror("timer_settime");
        return -1;
    }
    
    struct itimerspec ts2;
    ret = timer_gettime(timer, &ts2);
    if(ret){
        perror("timer_gettime");
        return -1;
    }
    else{
        printf("current sec=%ld nsec=%ld\n",
               ts2.it_value.tv_sec, ts2.it_value.tv_nsec);
        printf("next sec=%ld nsec=%ld\n", 
               ts2.it_interval.tv_sec, ts2.it_interval.tv_nsec);
    }

    ret = timer_getoverrun(timer);
    if(ret == -1){
        perror("timer_getoverrun");
        return -1;
    }
    else if(ret == 0)
        printf("no overrun\n");
    else
        printf("%d overrun(s)\n", ret);

    ret = timer_delete(timer);
    if(ret){
        perror("timer_delete");
        return -1;
    }

    return 0;
}

