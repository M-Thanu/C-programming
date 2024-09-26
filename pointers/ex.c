#include <stdio.h>
int main(){
    int a = 12;
    int *p;
    p=&a;
    printf("a: %d",a);
    printf("\n&a : %d",&a);

    printf("\np: %d",p);
    printf("\n*p : %d",*p);
    printf("\n&p : %d",&p);
    

    return 0;
}