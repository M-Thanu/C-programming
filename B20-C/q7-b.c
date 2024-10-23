#include <stdio.h>
#define PRODUCT(x) ( (x) * (x) )
int main(){
    char s[]="Get ready to learn C!";
    printf("\n%s",&s[2]);
    printf("\n%s",s);
    printf("\n%s",&s);
    printf("\n%c",s[2]);
    return 0;
}