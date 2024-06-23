#include <stdio.h>

int main(){
    //123 >> 6 >> 1 + 2 + 3

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int nlist[30];
    int c = 0;

    while(n != 0){
        nlist[c] = n % 10;
        n = n / 10;
        c += 1;
    }

    int sum=0;
    for (int j=0; j<c; j++){
        sum = sum + nlist[j];
    }

    printf("Total is: %d",sum);

    return 0;
}