#include <stdio.h>

//Function to find whether the given year is leap year or not
void LeapyearorNot(int year){
    if (year % 4 == 0){
            printf("%d is a leap year",year);
    }
    else if ((year % 100 ==0) || (year % 400 == 0)){
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is a not a leap year",year);
    }
}

int main(){
    //Variable declaration
    int y;

    //Taking input from user
    printf("Enter the year :");
    scanf("%d",&y);

    //Calling the function
    LeapyearorNot(y);
}