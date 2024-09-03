#include <stdio.h>
int main(){
    int n;
    printf("Enter the amount: ");
    scanf("%d",&n);
    int h;

    int t1=n/1000;
    if (n%500!=0){
        h=(n/1000)/500;
    }
    else if(n%200!=0){
        h=(n/1000)/200;
    }
    else if(n%100!=0){
        h =(n/1000)/100;
    }
    int f;
    if (h%50!=0){
        f=h/50;
    }
    else if(h%20!=0){
        f=h/20;
    }else{
        f=h/10;
    }
    int o;
    if(f>0){
        if(f%5==0){
            o=f/5;
        }
        else if(f%2==0){
            o=f/2;
        }
        else{
            o=f/1;
        }
    }
    printf("The amount %d is equal to %d thousands 
        \n%d five hundreds
        \n%d two hundreds
        \n%d hundreds
        \n%d fifties
        \n%d twenties
        \n%d tens
        \n%d fives
        \n%d twos
        \n%d ones ",t1,h,h,h,f,f,f,o,o,o);
    return 0;
}