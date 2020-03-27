#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

void sigint_handler(int signo)
{
    if(signo == SIGINT){
        printf("Caught SIGINT!\n");
        exit(EXIT_SUCCESS);
    }
}

int main(void)
{
    if(signal(SIGINT, sigint_handler) == SIG_ERR){
        fprintf(stderr, "signal error");
        return -1;
    }
    raise(SIGINT);
    return 0;
}

