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
    int min=100;
    for(int j=0; j<n; j++){
        if(arr[j]<min){
            min=arr[j];
        }
    }
    printf("Smallest Number: %d",min);

    return 0;
}