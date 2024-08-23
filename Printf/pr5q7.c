#include <stdio.h>
#include <ctype.h>
int main(){
    char ualp='D';
    char lalp='g';

    printf("Upper case character of g is:%c",toupper(lalp));
    printf("\nLower case character of D is:%c",tolower(ualp));

    return 0;
}