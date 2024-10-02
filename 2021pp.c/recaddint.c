#include <stdio.h>
int addint(int x);
int main(){
    int n;
    printf("No: ");
    scanf("%d",&n);
    int k=0;
    k = addint(n);
    printf("Sum: %d",k);
    
    return 0;
}
int addint(int x){
    int sum=x % 10;
    if (x==0){
        return 0;
    }else{
        sum = sum + addint(x/10);
    }
    return sum;
}