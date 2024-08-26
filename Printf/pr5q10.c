#include <stdio.h>
int main(){
    int num,fnum,lnum;
    num=25;
    printf("Number:25");

    fnum=num/10;
    lnum=num%10;

    int total = fnum + lnum;
    printf("\nTotal is:%d",total);

    return 0;
}