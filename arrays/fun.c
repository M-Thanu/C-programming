#include <stdio.h>
void inarr(int arr[] , int s);
void sumarr(int arr[], int s);

int main(){
    int a1[3];
    inarr(a1, 3);
    sumarr(a1, 3);

    return 0;
}
void inarr(int arr[], int s){
    for (int i=0; i<s; i++){
        printf("Enter: ");
        scanf("%d",&arr[i]);
    }
}
void sumarr(int arr[], int s){
    int sum=0;
    for (int j=0; j<s; j++){
        sum = sum + arr[j];
    }
    printf("Sum : %d",sum);
}