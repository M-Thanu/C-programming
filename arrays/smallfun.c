#include <stdio.h>
int sm(int array[], int s);
int main(){
    int arr[]={10,20,55,4,12,44};
    sm(arr,6);
    return 0;
}
int sm(int array[], int s){
    int min = 100;
    for (int i=0; i<s; i++){
        if(array[i]<min){
            min = array[i];
        }
    }
    printf("Minimum: %d",min);
}