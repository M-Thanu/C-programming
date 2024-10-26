#include <stdio.h>

int main(){
    int n;
    printf("Count: ");
    scanf("%d",&n);
    int arr[n];
    int *p;
    p=&arr[0];
    for(int i=0; i<n; i++){
        printf("Enter: ");
        scanf("%d" , &arr[i]);
    }
    
    int sum=0;
    for(int j=0; j<n; j++){
        sum = sum +*p;
        p=p+1;
    }
    printf("Sum : %d",sum);
    return 0;
}