#include <stdio.h>
int main(){
    float an_pop=200.00;
    for (int i=0; i<120; i++){
        an_pop=an_pop-(0.02*an_pop);
        printf("Month %d : %.2f\n",i+1,an_pop);
    }

    return 0;
}