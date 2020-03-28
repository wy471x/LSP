#define _POSIX_C_SOURCE 199309
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <signal.h>

void signal_handler(int signo)
{
    if(signo == SIGINT){
       printf("Caught SIGINT\n");
    }
}
int main(void)
{
    struct timespec req = {.tv_sec = 5, .tv_nsec = 0};
    struct timespec rem, *a = &req, *b = &rem;

    if(signal(SIGINT, signal_handler) == SIG_ERR){
        perror("signal error");
        return -1;
    }

    time_t start = time(NULL), end;
    while(nanosleep(a, b) && errno == EINTR){
        struct timespec *tmp = a;
        a = b;
        b = tmp;
    }
    end = time(NULL);
    printf("nanosleep seconds = %ld\n", end - start);

    return 0;
}

