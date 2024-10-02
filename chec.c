#include <stdio.h>
int ch(int x);
int main(){
    int a=5;
    ch(a);
    printf("After: %d",ch(a));
}
int ch(int x){
    x=x+5;
    printf("In: %d",x);
}