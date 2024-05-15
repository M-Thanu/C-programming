#include <stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Multiplication of table of %d",n);

    for(int i=1; i<=12; i++){
        printf("%d * %d = %d\n", n,i,n*i);
    }
}