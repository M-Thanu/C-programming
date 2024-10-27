#include <stdio.h>

int main(){
    int arr[3][2]={{1,2},{5,4},{8,7}};
    int count=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            if(arr[i][j]%2 == 0){
                count+=1;
            }
        }
    }
    printf("Count: %d",count);
    return 0;
}