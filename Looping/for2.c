#include <stdio.h>

int main(){
    int n;
    printf("Enter the limit:");
    scanf("%d",&n);

    int sum=0;
    for (int i=0; i<n; i++){
        sum = sum +i;
    }
    printf("Total:%d",sum);
    return 0;
}