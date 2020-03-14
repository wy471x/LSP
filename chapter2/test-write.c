#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

void test_write()
{
    const char *buf = "My ship is solid!";
    ssize_t nr;
    int fd = open("test-write.txt", O_WRONLY|O_CREAT, 0644);
    if(fd == -1){
        perror("open error");
        exit(1);   
    }
    nr = write(fd, buf, strlen(buf));
    if(nr == -1){
        perror("write error");
        exit(1);
    }
}

void test_write_r()
{
    ssize_t retr, retw, nr;
    char *buf = "ajkdhkljahsdjkghaklfdhgkjahfdlghskdjfhglkhdsfg\
                 ahdkjfhlashdfjlahsdkfhaksdhfaklshdflaksdjhfjhfkas\
                 asjdhfkashdkjfalshdkfjhsdkfhaskdjfhksdhfkjashdlfkhsajd\
                 kjhdfkashdflhskjdhfjsdhfksjdhfjkashdfkjhasldhflashdf\
                 sjahdfkjhasdlkfhalsjdhfjkhafiehkahflhsdkfhakdhklfhjkshdj\
                 kasjdfljaksdf jjasbndcjbajksghfkjhkeihfujahdfklahsdfjkhajdh\
                 adhfkajldhfkajsdhfjkashdfjkhasdhfwiuehf;WE;HWEIFHWFHASDHFASJ\
                 asdjfhajkdhfjkashdfjkhdjfkahjkjbcjsabfhaskdhfjkahDHkjshfah\
                 sdfajskldjfklajsdjflasjdlfja;sjdfkajsdcna,sndfjsfdfjkh\
                 sldjflkasjdkfjasdhfkjashdjfhaksdhfakhfsancfjsadhjfkhashfkj\
                 ajsdlfjaslkjdfkljsklfasdljhalkjhdfjaskldjflajsdjflksdjf\
                 falskdjfljaslfkjksaldjsdflkasdjfljas;djlfakjsdkjf;asljkdf\
                 laksjdflja;ljdfalksdjflkasjflkjsldkjflakjsldkjflaksjdfklj";
        ssize_t len = strlen(buf);
        int fdw = open("test-write.txt", O_WRONLY);
        if(fdw == -1){
            perror("open error");
            exit(-1);
        }
        while(len != 0 && (retw = write(fdw, buf, len)) != 0){
            if(retw == -1){
                if(errno == EINTR)
                    continue;
                perror("write error");
                break;
            }

            len -= retw;
            buf += retw;
        }
}

int main(void)
{
    //test_write();
    test_write_r();
    return 0;
}

