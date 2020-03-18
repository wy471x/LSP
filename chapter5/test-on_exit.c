#include <stdlib.h>
#include <stdio.h>
void my_function(int status, void *arg)
{
    char * buf = (char *)arg;
    printf("buf = %s", buf);
    printf("return code = %d\n", status);
}
void test_on_exit()
{
    if(on_exit(my_function, "hello, world!\n")){
        perror("on_exit error");
        exit(1);
    }
}
int main()
{
    test_on_exit();
    return 0;
}

