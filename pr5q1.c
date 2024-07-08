#include <stdio.h>

int main(){

    //Defining function
    int a; 
    int v; 
    int t;
    int S;

    //Taking inputs

    printf("Enter initial velocity : ");
    scanf("%d",&v);

    printf("Enter time taken for travel: ");
    scanf("%d",&t);

    printf("Enter accleration: ");
    scanf("%d",&a);

    //Calculation Process

    S = v*t + (a*t*t)/2;

    //Displaying output

    printf("Distance : %d",S);


    return 0;
}