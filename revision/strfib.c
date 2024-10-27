#include <stdio.h>
#include <string.h>

int main(){
    char first[15]="a";
    char second[15]="b";
    char mem[15]="";
    printf("%c\t%c\t",'a','b');
    int n=5;
    for(int i=3; i<=n; i++){
        strcpy(mem,second);
        strcat(mem,first);

        printf("%s\t",mem);

        strcpy(first,second);
        strcpy(second,mem);
    }

}