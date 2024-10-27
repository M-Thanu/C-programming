#include <stdio.h>


int main(){
    int num=0;
    printf("Enter num: ");
    scanf("%d",&num);
    int first=0;
    int second=1;
    int mem=0;
    int n=0;
    printf("0\t1\t");
    while(n<num-2){
        mem=first + second;
        printf("%d\t",mem);
        first=second;
        second=mem;
        n++;
    }
    return 0;
}