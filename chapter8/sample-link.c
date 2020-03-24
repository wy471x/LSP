#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int ret;

    ret = link("/home/dunk/share/LSP/chapter7/README.md", 
               "/home/dunk/share/LSP/chapter8/README-chapter7.md");
    if(ret)
        perror("link");
    return 0;
}

