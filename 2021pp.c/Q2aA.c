#include <stdio.h>
int main(){
    float fd=10000.00;
    float inrest;
    int yc=0;
    /*
    inrest = (20*fd)/100;
    
    yc=8000/inrest;
    
    */
   while(inrest<8000.00){
    inrest = inrest + (0.2*10000);
    yc=yc+1;
   }
   printf("Number of years: %d",yc);
    return 0;
}