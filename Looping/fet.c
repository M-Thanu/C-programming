#include <stdio.h>
int main(){
    char fname[30];
    printf("Name: \n");
    fgets(fname, sizeof(fname), stdin);
    printf("Hello %s",fname);
    return 0;
}