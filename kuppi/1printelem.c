#include <stdio.h>

int main(){
    int marks[3];
    marks[0]=95;
    marks[1]=85;
    marks[2]=25;
    printf("Assigning one by one\n");
    for(int i=0; i<3; i++){
        printf("%d \t",marks[i]);
    }

    printf("\nAssigning at the time of declaration\n");
    int ages[4]={25,11,5,14}; 
    for(int i=0; i<3; i++){
        printf("%d \t",ages[i]);
    }

    printf("\nGetting user input\n");
    int quantity[5];
    for(int i=0; i<5; i++){
        printf("Enter quantity: ");
        scanf("%d",&quantity[i]);
    }
    for(int i=0; i<5; i++){
        printf("%d \t",quantity[i]);
    }

    return 0;
}