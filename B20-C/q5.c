#include <stdio.h>
int main(){
    int x=10;
    int *p;
    int *q;
    q=&x;
    p=q;

    printf("X= %d",*p);
    return 0;
}