#include <stdio.h>

void marcal(int arr[], int *sum, float *avg);

int main(){
    int m1[3];
    int total=0;
    float average=0;
    float percentage = 0;

    for(int i=0; i<3; i++){
        printf("Enter the marks: ");
        scanf("%d",&m1[i]);
    }
   marcal(m1, &total, &average);
    printf("\nAverage is %.2f", average);
    percentage = (average / total) * 100;
    printf("\nPercentage is %.2f",percentage);
    return 0;
}

void marcal(int arr[], int *sum, float *avg){
    for(int i=0; i<3; i++){
        *sum = *sum + arr[i];
    }
    *avg = *sum / 3;
}