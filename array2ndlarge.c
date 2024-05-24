#include <stdio.h>

int main(){
    int myNum[4];
    int userin;

    for (int i=0; i<4; i++){
        printf("Enter your numbers: ");
        scanf("%d",&userin);

        myNum[i] = userin;
    }
    
    int fmax;
    int smax;

    for (int k=0; k<4; k++){
        if (myNum[k] > myNum[k+1]){
            fmax = myNum[k];
        }
        if (myNum[k] > fmax){
            
        }
    }

    printf("The largest number : %d" , fmax);

    return 0;

}