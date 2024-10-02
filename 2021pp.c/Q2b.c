#include <stdio.h>
int main(){
    int fd=10000;
    int inrest;
    inrest = (1.5*fd*12)/100;
    int t=0;
    t=fd+inrest;
    for(int i=1; i<=10; i++){
       
        printf("Total balance at %d year : %d\n",i,t);
        t=t+inrest;
    }
    return 0;
}