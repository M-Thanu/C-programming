#include <stdio.h>
int sum(int x);
int main(){
    int a =0;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Sum : %d",sum(a));
    return 0;
}

int sum(int x){
    int s=x;
    if(x==0){
        return 0;
    }else{
        s=s+sum(x-1);
    }
    return s;
}