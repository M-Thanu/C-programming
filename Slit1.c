#include <stdio.h>

int main(){
    int HM = 0;
    int Mar =0;
    int Fin = 0;
    int total = 0;
    char ct;
    printf("Welcome\n");
    while (total<4){
        printf("Enter your course type:");
        scanf("%c",&ct);

        if (ct == 'H' || ct == 'h'){
            HM +=1;
            total +=1;
        }else if (ct == 'M' || ct == 'm'){
            Mar +=1;
            total +=1;
        }else if (ct == 'F' || ct == 'f'){
            Fin +=1;
            total +=1;
        } else{
            printf("Error : Enter correct course type\n");
        }
    }
    printf("Registration closed\n");
    
    printf("Total number of applicants in Hospitality Management: %d\n", HM);
    printf("Total Registration fee earned from Hospitality Management: %d\n", HM*1500);

    printf("Total number of applicants in Marketing: %d\n", Mar);
    printf("Total Registration fee earned from Marketing: %d\n", Mar*2000);

    printf("Total number of applicants in Finance: %d\n", Fin);
    printf("Total Registration fee earned from Finance: %d", Fin*2500);
}