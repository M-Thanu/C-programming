#include <stdio.h>
int main(){
    int days=500;
    int y,m,d;
    y = days/365;
    days = days%365;

    m=days/30;
    days = days%30;
    printf("500 Days\n");
    printf("%d year, %d months and %d days", y,m,days);
    return 0;
}