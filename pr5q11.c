#include <stdio.h>

void IntegerPlace(int x){
    
    printf("The value of ++a is: %d\n",x+1);
    printf("Now the value of a is: %d\n",x+1);
    printf("\n");

    printf("The value of a++ is: %d\n",x+1);
    printf("Now the value of a is: %d\n",x+2);
    printf("\n");

    printf("The value of --a is: %d\n",x+1);
    printf("Now the value of a is: %d\n",x+1);
    printf("\n");

    printf("The value of a-- is: %d\n",x+1);
    printf("Now the value of a is: %d\n",x);
    printf("\n");

}

int main(){

    int a;
    printf("Enter the value for a: ");
    scanf("%d",&a);

    printf("The value of a is: %d\n",a);
    printf("\n");
    printf("...........................\n");
    printf("\n");

    IntegerPlace(a);
    return 0;
}