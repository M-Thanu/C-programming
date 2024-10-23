#include <stdio.h>

int main(){
    int n=0;
    printf("Enter num: ");
    scanf("%d",&n);

    int num[20];
    int i=0;

    while(n>0){
        num[i] = n % 10;
        n = n/10;
        i++;
    }
    int sum=0;
    for(int j=0; j<i; j++){
        if (num[j] % 2 == 0){
            sum = sum + num[j];
        }
    }
    printf("Sum : %d",sum);

    return 0;
}