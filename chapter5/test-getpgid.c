#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
    pid_t sid, pgid;
    pgid = getpgid(0);
    sid = getsid(0);
    if(sid == -1)
        perror("getsid");
    else
        printf("sid = %d\n", sid);
    if(pgid == -1)
        perror("getpgid");
    else
        printf("pgid = %d\n", pgid);
    return 0;
}

