#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ret;
    ret = truncate("./pirate.txt", 45);

    if(ret == -1){
        perror("truncate");
        exit(-1);
    }

    return 0;
}

