#include <stdio.h>

void fun(int arr[], int *sum, float *avg);

int main(){
    int a1[5];
    int total=0;
    float average=0;
    for(int i=0; i<5; i++){
        printf("Enter the number: ");
        scanf("%d",&a1[i]);
    }
   fun(a1, &total, &average);
    printf("Sum is %d",total);
    printf("\nAverage is %.2f", average);
    return 0;
}

void fun(int arr[], int *sum, float *avg){
    for(int i=0; i<5; i++){
        *sum = *sum + arr[i];
    }
    *avg = *sum / 5;
}