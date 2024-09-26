#include <stdio.h>

int main(){
    
    int arr[10];
    for(int i=0; i<10; i++){
        printf("Enter the salary: ");
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int j=0; j<10; j++){
        if(arr[j]>5000 && arr[j]<10000){
            count+=1;
        }
    }
    printf("Number of employees having salary between 5000 to 10000 are: %d",count);

    return 0;
}