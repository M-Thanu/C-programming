#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int j=0; j<n; j++){
        sum=sum+arr[j];
    }
    printf("Average: %.2f",(float)sum/n);

    return 0;
}