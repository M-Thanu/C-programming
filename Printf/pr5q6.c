#include <stdio.h>
int main(){
    float c=36.9;
    float f,k;
    f = c*(9/5)+32;
    k=c+273.15;

    printf("Fahrenheit value for 36.9 celcius is:%.2f",f);
    printf("\nKelvin value for 36.9 celcius is:%.2f",k);

    return 0;
}