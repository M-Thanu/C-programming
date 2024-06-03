#include <stdio.h>

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);

    int b;
    printf("Enter the number: ");
    scanf("%d",&b);

    if (a>b){
        printf("%d is greater than %d",a,b);
    }
    else if (a<b){
        printf("%d is less than %d",a,b);
    }
    else if (a==b){
        printf("%d is equal to %d",a,b);
    }
    return 0;
}