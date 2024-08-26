#include <stdio.h>
int main(){
    int sec=5000;
    int h,m,second;
    h = sec/3600;
    sec = sec%3600;

    m=sec/60;
    second = sec%60;
    printf("5000 Seconds\n");
    printf("%d hours, %d minutes and %d seconds", h,m,second);
    return 0;
}
