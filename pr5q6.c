#include <stdio.h>

void printFloatWithTwoDecimalPlaces(float number) {
    // Printing the number with two decimal places
    printf("%.2f\n", number);
}

int main(){
    float num;

    // Asking user for a float input
    float X=3.0;
    float y=12.5;
    float z=523.3;

    float A=300.0;
    float B=1200.5;
    float C=5300.3;

    //Printing original values

    printf("X\ty\tz=\t %f|\t%f|\t%f|",X,y,z);
    printf("A\tB\tC=\t %f|\t%f|\t%f|",A,B,C);

    printf("-----------------------------------------");


    // Calling the function to print the number with two decimal places
    
    printf("X\ty\tz=\t %f|\t%f|\t%f|",FloatWithTwoDecimalPlaces(X),FloatWithTwoDecimalPlaces(y),FloatWithTwoDecimalPlaces(z));
    printf("A\tB\tC=\t %f|\t%f|\t%f|",FloatWithTwoDecimalPlaces(A),FloatWithTwoDecimalPlaces(B),FloatWithTwoDecimalPlaces(C));
    
    return 0;
}

