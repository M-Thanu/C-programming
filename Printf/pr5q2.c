#include <stdio.h>
int main(){
    int r=14;
    #define PI 3.145
    printf("\nDiameter:%d", 2*r);
    printf("\nCircumference:%.2f",2*PI*r);
    printf("\nArea:%.2f",PI*r*r);

    return 0;
}