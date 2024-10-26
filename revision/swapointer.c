#include <stdio.h>
void swap(int *n1, int *n2);

int main(){
    int a,b;
    int *p, *q;
    printf("Enter numbers : ");
    scanf("%d %d",&a, &b);

    p=&a;
    q=&b;

    swap(p,q);
    return 0;
}

void swap(int *n1, int *n2){
    int temp=0;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
    printf("First: %d",*n1);
    printf("\nSecond: %d",*n2);
}