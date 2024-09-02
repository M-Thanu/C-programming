#include <stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    int r1 = num >> 2;
    int r2 = num << 1;

    printf("Result after Right Shift: %d",r1);
    printf("\nResult after Left Shift: %d",r2);
}