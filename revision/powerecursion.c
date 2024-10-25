#include <stdio.h>
int power(int x, int y);

int main(){
    int num=0;
    int pow=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter the power: ");
    scanf("%d",&pow);

    printf("Result : %d",power(num,pow));
    return 0;
}

int power(int x, int y){
    if(y==0){
        return 1;
    }else{
        return x*power(x,y-1);
    }
}
