#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void signal_handler(int signo/*, siginfo_t *si, void *ucontext */)
{
    if(signo == SIGUSR2){
        printf("Caught SIGUSR2 signo = %d.\n", signo);
        //printf("si->si_signo = %d\n", si->si_signo);
        //printf("si->si_int = %d\n", si->si_int);
        //if(si->si_code == SI_QUEUE)
            //printf("si->si_code : SI_QUEUE\n");
    }
}

int main(void)
{

    union sigval value;
    int ret;
    struct sigaction act;
    //act.sa_flags = SA_SIGINFO;
    //act.sa_sigaction = signal_handler;
    act.sa_handler = signal_handler;
    if(sigaction(SIGUSR2, &act, NULL) == -1){
        perror("sigaction error");
        return -1;
    }

    value.sival_int = 404;
    pid_t pid;

    if((pid = fork()) >  0){
        ret = sigqueue(pid, SIGUSR2, value);
        if(ret)
            perror("sigqueue");
    }

    return 0;
}

