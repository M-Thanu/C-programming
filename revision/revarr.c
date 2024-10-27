#include <stdio.h>
void revarr(int arr[], int x);

int main(){
    int a1[]={2,3,4};
    revarr(a1,3);
    return 0;
}

void revarr(int arr[],int x){
    int i;
    int j=0;
    for(i=x-1; i>=0; i--){
        printf("%d\t",arr[i]);
        j++;
    }
}
