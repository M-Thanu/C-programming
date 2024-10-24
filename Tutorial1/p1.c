#include <stdio.h>

void primefac(int a);

int main(){
    int n=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    primefac(n);
    
    return 0;
}

void primefac(int a){
    int i;
    for(i=2; i<=a; i++){
        while(a%i == 0){
            printf("%d \t",i);
            a=a/i;
        }
    }
}