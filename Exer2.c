#include <stdio.h>

int main(){
    int r;
    float A;
    float pi = 22/7;

    printf("Enter radius: ");
    scanf("%d",&r);

    A = pi*r*r;

    printf("Area of the circle is : %.2f",A);

    return 0;
}