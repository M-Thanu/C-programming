#include <stdio.h>
int max(int arr[], int x);
int main(){
    int a1={12,4,52};
    int x=2;

    printf("Maximum : %d",max(a1,x));
    return 0;
}

int max(int arr[], int x){
    int m=0;
    if (x==0){
        return 0;
    }else{
        if(m<max(arr,x-1)){
            m=x;
        }
    }
    return m;
}