#include <stdio.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    int count=0;

    while(num!=0){
        count=count+1;
        num=num/10;
    }

    printf("Number of digits in the number is : %d",count);
    return 0;
}