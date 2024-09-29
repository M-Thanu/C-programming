#include <stdio.h>

int main(){
    int arr[5];
    for (int i=0; i<5; i++){
        printf("Enter: ");
        scanf("%d",&arr[i]);
    }
    int n;
    printf("Enter the number to search: ");
    scanf("%d",&n);
    int c=0;
    for (int j=0; j<5; j++){
        if(arr[j]==n){
            c++;
        }
    }
    printf("%d is appearing %d times in this array",n,c);
    return 0;
}