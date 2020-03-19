#include <sched.h>
#include <stdio.h>
int main(void)
{
    struct sched_param sp;
    int ret;
    int priority = sched_get_priority_max(SCHED_OTHER);
    printf("priority = %d\n", priority);
    sp.sched_priority = priority;
    ret = sched_setparam(0, &sp);
    if(ret == -1){
        perror("sched_setparam");
        return 1;
    }

    ret = sched_getparam(0, &sp);
    if(ret == -1){
        perror("sched_getparam");
        return 1;
    }

    printf("Our priority is %d\n", sp.sched_priority);
    return 0;
}

