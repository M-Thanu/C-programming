#include <stdio.h>

int main(){
    /*printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");*/

    for (int i=0; i<8; i++){
        for (int j=0; j<4; j++){
            printf("* * ");
        }
        printf("\n");
        if((i==0) || (i==2) || (i==4) || (i==6)){
            printf(" ");
        }
        
    }

    return 0;
}