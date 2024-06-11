#include <stdio.h>

void SqrDm(int x){
    int PS = 4*x; //Perimeter of Square
    int AS = x * x; //Area of Square

    printf("Perimeter of Square : %d", PS);
    printf("\nArea of Square : %d", AS); 
    
}

void RecDm(int y, int z){
    int PR = 2*y + 2*z; //Perimeter of Square
    int AR = y * z; //Area of Square 

    printf("\nPerimeter of Rectangle : %d", PR); 
    printf("\nArea of Rectangle : %d", AR);
    
} 

int main(){
    int a,b,c;
    printf("Enter length of square: ");
    scanf("%d",&a);
    printf("Enter length of rectangle: ");
    scanf("%d",&b);
    printf("Enter width of rectangle: ");
    scanf("%d",&c);

    SqrDm(a); // Square Dimension
    RecDm(b,c); 
    
    return 0;
}