#include <stdio.h>
int main(){
    int fmax[5][5]={{11,12},
                    {21,22},
                    {31,32},
                    {41,42},
                    {51,52}};
    int i,j;
    int max=0;
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            if(fmax[i][j]>max){
                max=fmax[i][j];
            }
        }
    }
    printf("Max : %d",max);
    return 0;
}