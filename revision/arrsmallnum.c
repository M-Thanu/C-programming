#include <stdio.h>
int snumar(int *x, int size);

int main(){
    int arr1[]={10,4,8,2,12};
    printf("Small: %d",snumar(&arr1[0],5));
    return 0;

}

int snumar(int *x, int size){
    int min=100;
    for(int i=0; i<size; i++){
        if(*x<min){
            min=*x;
        }
        x++;
    }
    return min;
}