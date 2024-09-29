#include <stdio.h>

int sm(int *p, int s);

int main(){
    int arr[]={10,20,55,4,12,44};
    
    sm(&arr[0],6);
    return 0;
}
int sm(int *p, int s){
    int min = 100;
    for (int i=0; i<s; i++){
        if(*p<min){
            min = *p;
        }
        p=p+1;
    }
    printf("Minimum: %d",min);
}