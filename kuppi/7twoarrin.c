#include <stdio.h>

int main(){
    // [row] [column]
    int ages[3][3]={25,11,5,14,22,77}; //simultaneously
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t",ages[i][j]);
        }
        printf("\n");
    }

    printf("\nAnother Method\n");
    int marks[3][2]={{25,11},
                     {14,22},
                     {18,24}}; //simultaneously
    for (int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}