#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
int main()
{

    int ret;
    ret  = chmod("./map.png", S_IRUSR | S_IWUSR);
    if(ret){
        perror("chmod");
        return 1;
    }
    return 0;
}

