#define _GNU_SOURCE
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void signal_handler(int signo)
{
    char *sigstr = "Caught";
    psignal(signo, sigstr);
    printf("Caught: %s\n", sys_siglist[signo]);
    printf("Caught: %s\n", strsignal(signo));
    exit(EXIT_SUCCESS);
}
int main(void)
{
    if(signal(SIGQUIT, signal_handler) == SIG_ERR){
        fprintf(stderr, "signal error\n");
        return -1;
    }

    for(;;)
        pause();
    return 0;
}

