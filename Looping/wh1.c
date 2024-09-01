#include <stdio.h>

int main(){
    int n;
    printf("Enter the limit:");
    scanf("%d",&n);

    int i=1;

    while(i<=n){
        printf("%d\t",i);
        i=i+1;
    }
    return 0;
}