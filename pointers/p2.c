#include <stdio.h>
int main(){
    int a,b;
    int *p;
    int *q;

    printf("Input the first number: ");
    scanf("%d",&a);
    printf("Input the second number: ");
    scanf("%d",&b);
    
    p = &a;
    q =&b;

    int max;
    if (*p > *q){
        printf("The maximum number is : %d",*p);
    }else{
        printf("The maximum number is : %d",*q);
    }
    
    return 0;
}