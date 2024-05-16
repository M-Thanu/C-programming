#include <stdio.h>

int printSum(int k){
    if (k>0){
        return k + printSum(k-1);
    }
    else{
        //printf("invalid");
        return 0;
    }
}

int main(){
    int result = printSum(5);
    printf("%d", result);

    return 0;
}