#include <stdio.h>

int main(){
    
    int arr[10];
    for(int i=0; i<10; i++){
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    int max=1;
    int min=100;
    for(int j=0; j<10; j++){
        if(arr[j]<min){
            min=arr[j];
        }
        if(arr[j]>max){
            max=arr[j];
        }
    }
    printf("Highest Number: %d",max);
    printf("\nSmallest Number: %d",min);

    return 0;
}