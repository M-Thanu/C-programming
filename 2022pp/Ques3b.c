#include <stdio.h>

int getSum(int z);
int main(){
    
    int x=0;
    
    printf("Enter Integer: ");
    scanf("%d",&x);
    int k = getSum(x);
    printf("Sum : %d",k);
    
    return 0;
}

int getSum(int z){
    int sum =z;
    if (z == 0){
        return 0;
    }else{
        return z + getSum (z-1);
    }
    
   
}