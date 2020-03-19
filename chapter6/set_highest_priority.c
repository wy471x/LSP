#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int set_highest_priority(pid_t pid)
{
    struct sched_param sp;
    int policy, max, ret;

    policy = sched_getscheduler(pid);
    if(policy == -1){
        perror("sched_getscheduler");
        return -1;
    }

    max = sched_get_priority_max(policy);
    if(max == -1){
        perror("sched_get_priority_max");
        return -1;
    }

    memset(&sp, 0, sizeof(struct sched_param));
    sp.sched_priority = max;
    ret = sched_setparam(pid, &sp);

    return ret;
}
int main(void)
{
    int priority = set_highest_priority(0);
    printf("priority = %d\n", priority);
    return 0;
}

