#include <stdio.h>

void Calc(int x, int y){
    int sum=x+y;
    int sub;

    if (x>y){
        sub = x-y;
    }
    else{
        sub = y-x;
    }

    float div = x/y;

    printf("Sum : %d", sum);
    printf("\nSub : %d", sub);
    printf("\nDiv : %.2f", div); 
}

int main(){
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);

    Calc(a,b);
    
    return 0;
}

