#include <stdio.h>
int main(){
    int y;
    printf("Year: ");
    scanf("%d",&y);

    if(y%4==0){
        printf("Leap Year");
    }else if((y%100==0)&&(y%400==0)){
        printf("Leap Year");
    }else{
        printf("Not a Leap year");
    }
}