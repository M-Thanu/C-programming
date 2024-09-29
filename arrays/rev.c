#include <stdio.h>
void inarr(int arr[] , int s);
void revarr(int arr[], int s);

int main(){
    int a1[3];
    inarr(a1, 3);
    revarr(a1, 3);

    return 0;
}
void inarr(int arr[], int s){
    for (int i=0; i<s; i++){
        printf("Enter: ");
        scanf("%d",&arr[i]);
    }
}
void revarr(int arr[], int s){
    for (int j=s-1; j>=0; j--){
        printf("%d\t",arr[j]);
    }
}