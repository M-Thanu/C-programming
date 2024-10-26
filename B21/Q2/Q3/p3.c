#include <stdio.h>
#include <stdlib.h>

int sumOfBday(int x);
int main(){
    int bd=0;
    printf("Enter your birthday(ddmmyyyy): ");
    scanf("%d",&bd);
    int bdsum=0;
    bdsum= sumOfBday(bd);
    int r_num=0;
    r_num=rand();
    printf("RNum: %d",r_num);
    if(r_num == bdsum){
        printf("\nWinner");
    }else{
        printf("\nNot this time");
    }
    return 0;
}
int sumOfBday(int x){
    if (x==0){
        return 0;
    }else{
        return (x%10) + sumOfBday(x/10);
    }
}