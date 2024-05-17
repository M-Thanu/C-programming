#include <stdio.h>

void calcfun(){
    int height = 7;
    int width = 5;
    int perimeter = 2*(height + width);
    int area = height * width;

    printf("Perimeter of the rectangle is %d inches\n", perimeter);
    printf("Area of the rectangle is %d inches", area);
}
int main(){
    calcfun();

    return 0;

}