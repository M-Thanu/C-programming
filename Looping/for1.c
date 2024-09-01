#include <stdio.h>

int main(){
    int n;
    printf("Enter the limit:");
    scanf("%d",&n);

    for(int i=2; i<n; i=i+2){
        printf("%d\t",i);
    }
    return 0;
}