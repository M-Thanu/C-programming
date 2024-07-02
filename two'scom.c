#include <stdio.h>

int main(){
    int num;

    char Snum[50];

    printf("Enter the binary number: ");
    scanf("%d", &num);

    printf("%d",num);

    /*sprintf(Snum, "%d", num);

    for(int i=0; i<sizeof(Snum); i++){
        printf("%c",Snum[i]);
    }*/

   

    return 0;
}