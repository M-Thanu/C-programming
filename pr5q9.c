#include <stdio.h>
#include <math.h>

// Function to find the roots of the quadratic equation
void findRoots(float a, float b, float c);

int main() {
    float a, b, c;

    //Defining a qudratic equation to user
    printf("Quadratic equation comes in the format ax^2 + bx + c = 0");

    // Asking user for coefficients of the quadratic equation
    printf("Enter coefficient a: ");
    scanf("%f", &a);

    printf("Enter coefficient b: ");
    scanf("%f", &b);

    printf("Enter coefficient c: ");
    scanf("%f", &c);

    // Calling the function to find and print the roots
    findRoots(a, b, c);

    return 0;
}

void findRoots(float a, float b, float c) {
    float discriminant, realPart, imaginaryPart;
    
    if (a == 0) {
        printf("The coefficient 'a' cannot be zero for a quadratic equation.\n");
        return;
    }
    
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two distinct real roots
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } 
    
    else if (discriminant == 0) {
        // One real root
        float root = -b / (2 * a);
        printf("Root = %.2f\n", root);
        printf("Root = %.2f\n", root);
    } 
    
    else {
        // Two complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}
