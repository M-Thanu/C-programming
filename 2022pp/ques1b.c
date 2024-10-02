#include <stdio.h>
void checkEligibility(int a);
int main(){
    int age;
    printf("Enter Age: ");
    scanf("%d",&age);
    checkEligibility(age);
    return 0;
}
void checkEligibility(int a){
    if (a>18){
        printf("You are eligible to vote");
    }else{
        printf("You are not eligible to vote");
    }
}