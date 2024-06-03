#include <stdio.h>

int main(){
    for (int i=6; i>0; i--){
        for(int j=i; j>0; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}