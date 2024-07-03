#include <stdio.h>

int main(){
    char Snum[30];
    int num;
    int c=0;

    printf("Enter the number: ");
    scanf("%d",&num);

    while (num % 10 != 0){
        c = c + 1;
        num = num / 10;
    }

    printf("The length is : %d",c);

    

    return 0;
}