#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <grp.h>
int main(void)
{
    struct group *gr;
    int ret;

    gr = getgrnam("officers");
    if(!gr){
        perror("getgrnam");
        return 1;
    }

    ret = chown("manifest.txt", -1, gr->gr_gid);
    if(ret){
        perror("chown");
        return 1;
    }
    return 0;
}

