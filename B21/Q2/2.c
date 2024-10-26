#include <stdio.h>
int main(){
    int hu_pop=1000;
    for (int i=0; i<10; i++){
        hu_pop=(110*hu_pop)/100;
        printf("Year %d : %d\n",i+1,hu_pop);
    }

    return 0;
}