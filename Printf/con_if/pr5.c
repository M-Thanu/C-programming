#include <stdio.h>
int main(){
    int sr,er;
    printf("Enter start reading: ");
    scanf("%d",&sr);
    printf("Enter ending reading: ");
    scanf("%d",&er);
    int c=er-sr;
    if(c>0 && c<=50){
        printf("Charge : %.2f",c*0.50); 
    }else if(c>50 && c<=150){
        printf("Charge: %.2f",50*0.50+(c-50)*0.75);
    }
    else if(c>150 && c<=250){
        printf("Charge: %.2f",50*0.50+100*0.75+(c-150)*1.20);
    }
    else{
        float x=50*0.50+100*0.75+150*1.20+(c-250)*1.50;
        float y=(20.0/100)*x;
        printf("Charge: %.2f",x-y);
    }

    return 0;
}