#include <stdio.h>

int main(){
    float w1, w2, n1, n2, average;

    printf("Enter the weight of first item : ");
    scanf("%f",&w1);
    printf("Total number of first item: ");
    scanf("%f", &n1);
    printf("Enter the weight of second item : ");
    scanf("%f",&w2);
    printf("Total number of second item: ");
    scanf("%f", &n2);

    average = (w1*n1) + (w2*n2) / (n1+n2);

    printf("Average weight: %.2f",average);

}