# include <stdio.h>

int main(){
    int myNum[10];

    myNum[0] = 3;
    myNum[1] = 4;
    myNum[2] = 6;
    myNum[3] = 8;
    myNum[4] = 5;
    myNum[5] = 4;
    myNum[6] = 2;
    myNum[7] = 8;
    myNum[8] = 1;
    myNum[9] = 9;

     int size = 9;
    printf("Original array elements : ");
     for (int i=0; i<size; i++){
        printf("%d\t", myNum[i]);
    }

   
    for (int i=0; i<size; i++){
        for (int j=i+1; j<size; j++){
            if(myNum[i] == myNum[j]){
                for(int k=j; k<size-1; k++){
                    myNum[k] = myNum[k+1];
                }
                size --;
                j --;
            }
        }
    }
    printf("Updated array elements : ");
    for (int i=0; i<size; i++){
        printf("%d\t", myNum[i]);
    }

   
}