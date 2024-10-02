#include <stdio.h>
int main(){
    int ap=200;
    float mderate;
    
    for (int i=1; i<=12; i++){
        mderate = 0.02*ap;
        ap = ap-(int)mderate;
        
        printf("Animals in month %d is %d\n",i,ap);
    }
    return 0;
}