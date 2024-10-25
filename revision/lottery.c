#include <stdio.h>
#include <stdlib.h>
int sumOfBday(int x);

int main(){
    int date =0;
    printf("Enter birthdate: ");
    scanf("%d",&date);

    int k=rand();
    
    if(sumOfBday(date)==k){
        printf("W");
    }else{
        printf("L");
    }
}

int sumOfBday(int x){
    if(x==0){
        return 0;
    }else{
        return (x%10)+sumOfBday(x/10);
    }
    
}