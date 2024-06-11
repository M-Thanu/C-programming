#include <stdio.h>

float AddandAvg(float x, float y){
    float sum = x + y;
    float avg = sum / 2;

    return sum;
    return avg;

}
    
int main(){
    int a,b;
    printf("Enter 1st number: ");
    scanf("%f",&a);
    printf("Enter 2nd number: ");
    scanf("%f",&b);

    printf("Total is %.2f\n Average is %.2f",AddandAvg(a,b));
    
    return 0;
}