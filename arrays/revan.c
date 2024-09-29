#include <stdio.h>
void revan(int arr1[], int arr2[], int s);

int main(){
    int a1[] = {10,20,30,40};
    int a2[4];
    revan(a1,a2, 4);
    for (int j=0; j<4; j++){
        printf("%d \n",a2[j]);
    }
    return 0;
}

void revan(int arr1[], int arr2[], int s){
    int j=0;
    for (int i = s-1; i>=0; i--){
        arr2[j] = arr1[i];
        j++;
    }
}