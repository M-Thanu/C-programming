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
    int max=1;
    for(int j=0; j<n; j++){
        if(arr[j]>max){
            max=arr[j];
        }
    }
    printf("Highest Number: %d",max);
}