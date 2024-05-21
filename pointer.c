#include <stdio.h>

int main(){
    int age = 43;
    int* ptr = &age; //pointer variable

    printf("%d\n", age);
    printf("%d\n", *ptr); // dereference operator

    printf("%p\n", &age); // & reference operater
    printf("%p\n", ptr);

    return 0;
}