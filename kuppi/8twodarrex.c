#include <stdio.h>

int main(){
    
    printf("\nFinding Smaller Number\n");
    int marks[3][2]={{25,11},
                     {14,22},
                     {18,24}}; 
    int min = 100;
    for (int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            if (marks[i][j]<min){
                min = marks[i][j];
            }
        }
    }
    printf("Smallest Number: %d",min);
    return 0;
}