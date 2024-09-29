#include <stdio.h>
void freven(int arr[][2], int r, int co);
int main(){
    int fmax[5][2]={{11,12},
                    {21,22},
                    {31,32},
                    {41,42},
                    {51,52}};
    freven(fmax, 5,2);
    return 0;
}
void freven(int arr[][2], int s, int co){
    int c=0;
    for (int i=0; i<s; i++){
        for (int j=0; j<co; j++){
            if(arr[i][j] % 2 == 0){
                c++;
            }
        }
    }
    printf("Frequency of even numbers : %d",c);
}