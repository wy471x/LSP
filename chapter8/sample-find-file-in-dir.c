#include <sys/types.h>
#include <unistd.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>

int find_file_in_dir(const char *path, const char *file)
{
    struct dirent *entry;
    int ret = 1;
    DIR *dir;

    dir = opendir(path);
    errno = 0;
    while((entry = readdir(dir)) !=  NULL){
        if(!strcmp(entry->d_name, file)){
            ret = 0;
            break;
        }
    }

    if(errno && !entry)
        perror("readdir");

    closedir(dir);
    return ret;
}

int main(int argc, char *argv[])
{
    if(argc < 3){
        perror("args error");
        return -1;
    }
    if(find_file_in_dir(argv[1], argv[2])){
        fprintf(stderr, "\"%s\" isn't in \"%s\"\n", argv[2], argv[1]);
        return -1;
    }
    printf("\"%s\" is in \"%s\"\n", argv[2], argv[1]);
    return 0;
}

