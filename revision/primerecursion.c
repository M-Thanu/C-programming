#include <stdio.h>
int isprime(int x);
int main(){
    int a =0;
    printf("Enter a number: ");
    scanf("%d",&a);

    int p;
    p=isprime(a);
    if(p==1){
        printf("Prime Number");
    }else{
        printf("Not a prime number");
    }
    return 0;
}

int isprime(int x){
    int pr=0;
    if(isprime(x)==0){
        return 1;
    }
    else if(x%isprime(x-1) != 0){
        pr = 1;
    }else {
        pr = 0;
    }
    return pr;
}