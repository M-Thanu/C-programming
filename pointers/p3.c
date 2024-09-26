#include <stdio.h>
int main(){
    int n;
    printf("Input the number of elements to store in the array(max 10): ");
    scanf("%d",&n);
    int arr[n];
    int *p;
    printf("Input %d number of elements in the array: \n",n);
    for(int i=0; i<n; i++){
        printf("element - %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int j=0; j<n; j++){
        p=&arr[j];
        sum = sum + *p;
    }
    printf("The sum of array is : %d",sum);
    return 0;
}