#include <stdio.h>

int main(){
    int hr, min, time;

    printf("Enter the number of hours: ");
    scanf("%d",&hr);

    printf("Enter the minutes: ");
    scanf("%d",&min);

    time = hr * 60 + min;

    printf("Total minutes: %d", time);

}