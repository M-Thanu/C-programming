#include <stdio.h>

int main(){

    int S;
    int v;
    int t;
    int a;

    printf("Enter initial velocity : ");
    scanf("%d",&v);

    printf("Enter time taken for travel: ");
    scanf("%d",&t);

    printf("Enter accleration: ");
    scanf("%d",&a);

    S = v*t + (a*t*t);

    printf("Distance : %d",S);


    return 0;
}