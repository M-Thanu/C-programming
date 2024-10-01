#include <stdio.h>
void high(int x);
int main(){
    
    int marks[6];
    marks[0]=95;
    marks[1]=85;
    marks[2]=25;
    marks[3]=45;
    marks[4]=15;
    marks[5]=97;
    
    for(int i=0; i<6; i++){
        high(marks[i]);
    }
   
    return 0;
}

void high(int x){
    if (x > 40){
        printf("%d is pass\n",x);
    }
}