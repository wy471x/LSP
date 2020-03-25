#include <sys/inotify.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_LEN 255
int main(void)
{
    int fd;

    fd = inotify_init();
    if(fd == -1){
        perror("inotify_init");
        exit(EXIT_FAILURE);
    }

    int wd;
    wd = inotify_add_watch(fd, "/etc", IN_ACCESS | IN_MODIFY);
    if(wd == -1){
        perror("inotify_add_watch");
        exit(EXIT_FAILURE);
    }

    char buf[BUF_LEN] __attribute__((aligned(4)));
    ssize_t len, i = 0;
    len = read(fd, buf, BUF_LEN);

    while(i < len){
        struct inotify_event *event = (struct inotify_event *) &buf[i];
        printf("wd=%d mask=%d cookie=%d len=%d dir=%s\n", event->wd, 
               event->mask, event->cookie, event->len, (event->mask & IN_ISDIR)
               ? "yes" : "no");

        if(event->len)
            printf("name=%s\n", event->name);

        i += sizeof(struct inotify_event) + event->len;
    }

    return 0;
}

