#include <stdio.h>

int main(){
    
    int arr[10];
    for(int i=0; i<10; i++){
        printf("Enter the age: ");
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int j=0; j<10; j++){
        if(arr[j]>17 && arr[j]<19){
            count+=1;
        }
    }
    printf("Number of students having age between 17 to 19 are: %d",count);

    return 0;
}