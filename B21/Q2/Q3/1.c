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
    int dobarr[8];
    int i=0;
    while(i<8){
        dobarr[i]=x%10;
        x=x/10;
        i++;
    }
    int sum=0;
    for(int i=0; i<8; i++){
        sum=sum+dobarr[i];
    }
    return sum;
}