#include <stdio.h>
int main(){
    int r,d,s,a;
    //const float PI=3.145;
    #define PI 3.145
    printf("Enter the radius:");
    scanf("%d",&r);
    printf("\nDiameter:%d", 2*r);
    printf("\nCircumference:%.2f",2*PI*r);
    printf("\nArea:%.2f",PI*r*r);

    return 0;
}