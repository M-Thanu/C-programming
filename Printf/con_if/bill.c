#include <stdio.h>
int main(){
    int sr,er;
    printf("Enter start reading: ");
    scanf("%d",&sr);
    printf("Enter ending reading: ");
    scanf("%d",&er);
    int c=er-sr;
    if(c>0 && c<=100){
        printf("Charge : %.2f",c*1.50);
    }else if(c>100 && c<=200){
        printf("Charge: %.2f",c*2.50);
    }
    else if(c>200 && c<=500){
        printf("Charge: %.2f",c*3.50);
    }
    return 0;
}