#include <stdio.h>
int main(){
    int a=10;
    int b=15;
    int c=20;
    int d=40;
    int e=15;

    int total=a+b+c+d+e;
    float avg= total/5;

    printf("Average:%.2f",avg);
    return 0;
}