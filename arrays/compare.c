#include <stdio.h>

void com(int arr[], int s);

int main(){
    
    int a1[]={12,10,8,12};
    com(a1, 4);
    return 0;
}
void com(int arr[], int s){
    int j=s-1;
    for (int i=0; i<s; i++){
        if(arr[i]==arr[j]){
            printf("%d and %d elements are equal",i,j);
        }
        j--;
    }
}