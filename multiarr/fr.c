#include <stdio.h>

int main(){
    int fmax[5][2]={{11,12},
                    {21,22},
                    {31,32},
                    {41,42},
                    {51,52}};
    int c=0;
     for (int i=0; i<5; i++){
        for (int j=0; j<2; j++){
            if(fmax[i][j]%2==0){
                c++;
            }
        }
    }
    printf("Frequency of even numbers : %d",c);
    
    return 0;
}
