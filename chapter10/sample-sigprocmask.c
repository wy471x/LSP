#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void signal_handler(int signo)
{
    printf("Caught SIGINT!\n");
}

int main(void)
{
    sigset_t blockSet, prevMask;

    if(signal(SIGINT, signal_handler) == SIG_ERR){
        fprintf(stderr, "signal error");
        return -1;
    }
    sigemptyset(&blockSet);
    sigaddset(&blockSet, SIGINT);

    if(sigprocmask(SIG_BLOCK, &blockSet, &prevMask) == -1){
        fprintf(stderr, "sigprocmask error");
        return -1;
    }

    sleep(5);

    if(sigprocmask(SIG_SETMASK, &prevMask, NULL) == -1){
        fprintf(stderr, "sigprocmask error");
        return -1;
    }
    
    return 0;
}

