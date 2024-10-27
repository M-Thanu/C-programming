#include <stdio.h>
void isPrime(int x);

int main(){
    int num=0;
    printf("Enter num: ");
    scanf("%d",&num);

    isPrime(num);
    return 0;
}

void isPrime(int x){
    int temp=0;
    int i;
    for(i=2; i<x; i++){
        if(x%i == 0){
            temp=1;
            break;
        }else{
            temp=0;
        }
    }
    if(temp==0){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
}
