#include <stdio.h>
int maxel(int *a);

int main(){
    int arr[5]={1,8,2,4,1};
    printf("Max: %d",maxel(&arr[0]));
    return 0;
}

int maxel(int *a){
    int max=0;
    for(int i=0; i<5; i++){
        if(*a > max){
            max=*a;
        }
        a+=1;
    }
    return max;
}