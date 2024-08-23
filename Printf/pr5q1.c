#include <stdio.h>

int main(){
    int n1=15;
    int n2=4;

    printf("Summation:%d\n",n1+n2);
    if (n1>n2){
        printf("Subraction:%d\n",n1-n2);
    }
    else{
        printf("Subraction:%d\n",n2-n1);
    }
    printf("Multiplication:%d\n",n1*n2);
    printf("Division:%d\n",n1/n2);
    printf("Modulus:%d",n1%n2);
}