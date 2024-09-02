#include <stdio.h>
int main(){
    int sec;
    printf("Enter the number of seconds: ");
    scanf("%d",&sec);
    int h,m,second;
    h = sec/3600;
    sec = sec%3600;

    m=sec/60;
    second = sec%60;
    printf("%d hours, %d minutes and %d seconds", h,m,second);
    return 0;
}

