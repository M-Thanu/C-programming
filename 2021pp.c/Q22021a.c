#include <stdio.h>
int main(){
    float hp=1000.00;
    
    for (int i=1; i<=10; i++){
        float inrate = 0.1*hp;
        hp=hp+inrate;
        printf("Humans in year %d is %.2f\n",i,hp);
    }
    return 0;
}