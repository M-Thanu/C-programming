# include <stdio.h>

int main(){
    printf("Welcome to the Calculator\n");
    int a;
    int b;
    int op;
    printf("Please input your numbers\n");
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    printf("Operations available are : \n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\nPlease select your number: ");
    scanf("%d", &op);

    switch(op){
        case 1:
            printf("%d + %d = %d",a,b,a+b);
            break;
        case 2:
            if (a > b){
                printf("%d - %d = %d",a,b,a-b);
            }
            else{
                printf("%d - %d = %d",b,a,b-a);
            }
            break;
        case 3:
            printf("%d * %d = %d",a,b,a*b);
            break;
        case 4:
            printf("%d / %d = %d",a,b,a/b);
            break;
        default:
            printf("Enter the correct operation number");
    }
}