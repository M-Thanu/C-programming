#include <stdio.h>
int main(){
    int fmax[3][2]={{11,12},
                    {21,22},
                    {31,32}};
    int i,j;
    for (i=0; i<3; i++){
        for (j=0; j<2; j++){
            printf("%d\t",fmax[i][j]);
        }
        printf("\n");
    }
    return 0;
}