#include <stdio.h>

int main(){
    struct distance {
        int feet;
        float inch;
    }d[2];

    for(int i=0; i<2; i++){
        printf("Enter information for distance %d\n",i+1);
        printf("Enter feet: ");
        scanf("%d",&d[i].feet);
        printf("Enter inch: ");
        scanf("%f",&d[i].inch);
    }

    float inchs = 0;
    inchs = d[0].inch + d[1].inch;

    int feet=0;
    feet = d[0].feet + d[1].feet;

    int c=0;

    while (inchs>12.00){
        inchs = inchs - 12.00;
        c = c+1;
    }
    
    printf("Sum of distances = %d' %.2f\"",feet+c,inchs);


    return 0;
}