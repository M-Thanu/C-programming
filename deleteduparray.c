# include <stdio.h>

int main(){
    int myNum[10];

    myNum[0] = 10;
    myNum[1] = 4;
    myNum[2] = 6;
    myNum[3] = 8;
    myNum[4] = 5;
    myNum[5] = 4;
    myNum[6] = 2;
    myNum[7] = 8;
    myNum[8] = 1;
    myNum[9] = 9;

    for (int i=0; i<9; i++){
        for (int j=1; j<10; j++){
            if(myNum[i] == myNum[j]){
                myNum[j] = 0;
            }
        }
    }

    for (int k=0; k<9; k++){
        printf("%d",myNum[k]);
    }
}