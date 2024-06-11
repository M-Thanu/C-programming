#include <stdio.h>

int sqrNo(int x){
    return x*x;
}

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);

    printf("Square value of %d is %d",a,sqrNo(a));
    
    return 0;
}