#include <stdio.h>

int main(){
    int n;
    printf("Enter the limit:");
    scanf("%d",&n);

    int sum=0;
    for (int i=1; i<n; i=i+2){
        sum = sum+i;
    }
    printf("\nSum of odd numbers upto %d : %d",n,sum);
    return 0;
}