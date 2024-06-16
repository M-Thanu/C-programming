#include <stdio.h>

int main(){
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int first;
    int last;

    first = num;

    while(first>=10){
        first = first / 10;
    }

    last = num % 10;

    printf("First number: %d",first);
    printf("\nLast number: %d",last);
    
    return 0;
}