#include <stdio.h>

void AddandAvg(float x, float y){
    float sum = x + y;
    float avg = sum / 2;

    printf("Total is : %.2f", sum);
    printf("\nAverage is: %.2f", avg);

}
    
int main(){
    int a,b;
    printf("Enter 1st number: ");
    scanf("%f",&a);
    printf("Enter 2nd number: ");
    scanf("%f",&b);

    AddandAvg(a,b);
    
    return 0;
}