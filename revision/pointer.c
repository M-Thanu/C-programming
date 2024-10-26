#include <stdio.h>

int main(){
    int a,b;
    int *p, *q;
    printf("Enter numbers : ");
    scanf("%d %d",&a, &b);

    p=&a;
    q=&b;

    int max=0;
    if(*p>*q){
        max=*p;
    }else{
        max=*q;
    }
    
    printf("max: %d",max);
    return 0;
}