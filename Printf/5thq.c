#include <stdio.h>

int main(){
    /*printf(" #####\n");
    printf("##   ##\n");
    printf("#\n");
    printf("#\n");
    printf("#\n");
    printf("#\n");
    printf("#\n");
    printf("##   ##\n");
    printf(" #####\n");*/

    for (int j=1; j<10; j++){
            switch (j){
                case 1:
                    printf(" ####\n");
                    break;
                case 2:
                    printf("##  ##\n");
                    break;
                case 3:
                    printf("#\n");
                    break;
                case 4:
                    printf("#\n");
                    break;
                case 5:
                    printf("#\n");
                    break;
                case 6:
                    printf("##  ##\n");
                    break;
                case 7:
                    printf("######\n");
                    break;
            }
        }

    return 0;
}