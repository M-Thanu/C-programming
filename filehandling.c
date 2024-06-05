#include <stdio.h>

int main(){
    FILE *f1ptr;
    f1ptr = fopen("f1.txt","w");

    fprintf(f1ptr, "Hello World");

    fclose(f1ptr);
    return 0;
}