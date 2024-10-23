#include <stdio.h>
int main(){
    int n;
    printf("enter num: ");
    scanf("%d",&n);
    int i=1;
    int fac=1;

    do{
        fac = fac*i;
        i++;
    }
    while(i<=n);
    printf("Fac: %d",fac);
    
    return 0;
}