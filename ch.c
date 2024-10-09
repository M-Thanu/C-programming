#include <stdio.h>

int main(){
    char s='G';

    switch(s){
        case 'R':
            printf("D");
        case 'G':
            printf("S");
        case 'B':
            printf("K");
        default:
            printf("H");
        break;
    }
    printf("Hi");
    return 0;
}