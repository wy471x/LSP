#include <sys/time.h>
#include <sys/resource.h>
#include <stdio.h>
int main(void)
{
    struct rlimit rlim;
    int ret;

    ret = getrlimit(RLIMIT_CORE, &rlim);
    if(ret == -1){
        perror("getrlimit");
        return 1;
    }

    printf("RLIMIT_CORE limits: soft=%ld hard=%ld\n", 
           rlim.rlim_cur, rlim.rlim_max);
    return 0;
}

