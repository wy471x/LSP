#include <unistd.h>
#include <signal.h>
#include <stdio.h>

void alarm_handler(int signo)
{
    if(signo == SIGALRM)
        printf("Caught SIGALRM\n");
}

void func(void)
{
    signal(SIGALRM, alarm_handler);
    alarm(5);

    pause();
}

int main(void)
{
    func();
    return 0;
}

