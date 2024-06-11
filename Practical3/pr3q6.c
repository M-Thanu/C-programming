#include <stdio.h>

void OddorEven(int x){
    if (x % 2 == 0){
        printf("%d is even",x);
    }
    else{
        printf("%d is odd",x);
    }
}

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);

    OddorEven(a);
    
    return 0;
}