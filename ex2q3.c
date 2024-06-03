#include <stdio.h>

int main(){
    float puramt;
    float payamt;

    printf("Enter purchase amount: ");
    scanf("%f",&puramt);

    if (puramt>5000.00){
        payamt = puramt - (15.00/100.00)*puramt;
    }
    else{
        payamt = puramt - (10.00/100.00)*puramt;
    }

    printf("Your amount: %.2f",payamt);
    
    return 0;
}