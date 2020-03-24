#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int ret;

    ret = symlink("/home/dunk/share/LSP/chapter7/README.md", 
               "/home/dunk/share/LSP/chapter8/README-chapter7-symlink.md");
    if(ret)
        perror("link");
    return 0;
}

