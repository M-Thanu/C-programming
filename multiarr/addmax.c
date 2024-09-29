#include <stdio.h>
int main(){
    int a1[2][3]={{1,2,3},{4,5,6}};
    int a2[2][3]={{1,2,3},{4,5,6}};
    int sum=0;
    int r[2][3];
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            sum = a1[i][j] + a2[i][j];
            r[i][j] = sum;
        }
    }
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            printf("%d \t",r[i][j]);
        }
        printf("\n");
    }
    

    
}