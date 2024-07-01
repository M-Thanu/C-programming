#include <stdio.h>

int main(){
    char Snum[30];
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    //sprintf(Snum, "%d",num);

    int ld;
    ld = num % 10;
    int c;
    
    for (int i=1; i<10; i++){
        while (ld == i){
            c +=1;
        }
    }

    

    return 0;
}