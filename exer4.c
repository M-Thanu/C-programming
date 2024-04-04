#include <stdio.h>

int check(int sum){
    if(sum>=10 && sum<=20){
        return 30;
    }
    else{
        return 0;
    }
}

int main(){
    int x,y,sum;
    printf("Enter first integer: ");
    scanf("%d",&x);
    printf("Enter second integer: ");
    scanf("%d",&y);
    sum = x + y;

    printf("%d", check(sum));
}


