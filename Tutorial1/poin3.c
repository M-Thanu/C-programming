#include <stdio.h>

int minfun(int arr[], int *m);

int main(){
    int a1[3] = {2,8,12};
    int min=100;

    printf("Minimum : %d", minfun(a1,&min));
    
    return 0;
}

int minfun(int arr[], int *m){
    for (int i=0; i<3; i++){
        if(arr[i] < *m){
            *m = arr[i];
        }
        return *m;
    }
}
