#include <stdio.h>
int main(){
    float fd=10000.00;
    float inrest;
    /*
    inrest = (1.5*fd*12)/100;
    int t=0;
    t=fd+inrest;
    for(int i=1; i<=10; i++){
       
        printf("Total balance at %d year : %d\n",i,t);
        t=t+inrest;
    }
    */
   for (int j=1; j<=120; j++){
    inrest = (1.5*fd)/100;
    fd=fd+inrest;
    printf("Total : %.2f\n",fd);
   }

    return 0;
}