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

    int sum;
    sum = *p+*q;
    printf("The sum of the entered number is: %d",sum);
    return 0;
}