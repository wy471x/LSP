#include "lsp.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main(void)
{
    size_t len;
    size_t i;
    char p[] = "asdjflkasjdlkfjalksjdflkajslkdjflkasjdklfjklasjdffjsadlkjflsajf\
                ksadjfkljasdljfklasjdklfjsakdljfklsjdkfjsakdljfsadsjfsadljdkfjs\
                kdjflaskdjfkljsadlkjflaskjdlfajsdklfjasldjflskdjfklsdjflsdjfklj\
                sdjflksdjfljwejfisdfjaasjdfsjssjfasjdfiwashdfhassidhfdowihefhdk\
                lasdkjflsajsdlfjwsejfaijfalsjdfasljflirjliajsdldjfaskjdflfajsdl\
                asljdklajskldjaksjlkhsidhfkjshdfjkhskjdfhkjshdkjfhskhdfkhsdjdhf\
                sdfjlsjdkflsjdlfjsiejflisjdlfjslkdjfslkjglksjlgsdflsjdlfjsljdfj\
                sdlkfjlskjdkfjslkjdflsjljksdfjlsjlkjslgfsjdgksdlfkjglsdjfkgjjgk\
                ureighsdkfhksjhdkjhksjhdjkhgjkshdfkjghskdhhskjdfhsdkjfhksjhdfjh\
                sdklflksjdlfkjskldjflskjdflksjlfjslkjfksdjflksjdlfkjskljdfklsjd\
                sdljflsjdklfjsjfklsjdfljslkfjskljdflksjdflsjdflksjdflksjlkffslk\
                sldkfdslkdflksfdkffsfsjdlkfjsdhfkshdjkfhkjshdjfhkjsdhfjkshdjkfh\
                sdjfslkjdklfjslkjdfhskjhkjhsfjghkjdfhgjkdhfgjkhdjkfghjdfhjghdgh\
                slkjfksjdkjfsljdklfjslkjglksjdfkljslkdjfskjfjdfskjdflsjdkfjkdjs\
                slkdjfslkjdkljflkjsldkjflksjdlkjfgsdfjghsjgksdfhgjdfhgjksdhfkgh\
                gskdhfgjksdflgsdgkhsdkjfhgjkshdjkfghjsfhgjhsdkjfhgdjhfghdjfhgdj\
                dfglsjfklgjslkdjfgsdjfghkjsdhfjghskjdhgjkhsdkfjghskdgjfghhhgfdk\
                dsfkjglksdjfklgjskldjfgkljsdkfjglrjgsijdljfgilsjdljglirjglsirjf\
                sldkfjgklsjdkljgirjglskdjfgljsdlkfglshdkflghlsdnvklsndfkgnkgkgh\
                slkfjglksdjfkgjslkdjfgkljdsfkgjskdfjgklsdjfgkljsdfkljglskdjfgkd\
                dsflkgjsdfjgklsjdfkgjslkdjfgksjdfkgjksdjfglkdsjflkgkfkjfgkdgkjf\
                sdfgsdkflgkssdfdlfkgglsdkfgleksdffkghldskfgdlksdfkfjgsdkjfljf"
                ;
    time_t start = time(NULL), end;
    for(i = 0; i < strlen(p); i++)
        printf("%c", toupper(p[i]));
    end = time(NULL);
    printf("use seconds = %ld\n", end - start);
    return 0;
}

