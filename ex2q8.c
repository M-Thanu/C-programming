#include <stdio.h>

int main(){
    int unit;

    printf("Enter number of units: ");
    scanf("%d",&unit);

    if (unit > 500){
        printf("The amount is Rs.4000");
    }
    else if (unit>200 && unit<500){
        printf("The amount is Rs.2500");
    }
    else if (unit>100 && unit<200){
        printf("The amount is Rs.1750");
    }
    else{
        printf("Enter the correct number of units");
    }
    return 0;
}