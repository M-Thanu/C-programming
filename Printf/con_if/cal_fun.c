#include <stdio.h>
int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);
int mod(int x,int y);

int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    int op;
    printf("Operations are: \n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n5 for modulus\nPlease choose one : ");
    scanf("%d",&op);

    switch(op){
        case 1:
            add(a,b);
            break;
        case 2:
            sub(a,b);
            break;
        case 3:
            mul(a,b);
            break;
        case 4:
            div(a,b);
            break;
        case 5:
            mod(a,b);
            break;
        default:
            printf("Choose the correct operation");
    }
    return 0;

}

int add(int x,int y){
    printf("%d",x+y);
}
int sub(int x,int y){
    if(x>y){
        printf("%d",x-y);
    }else{
        printf("%d",y-x);
    } 
}
int mul(int x,int y){
    printf("%d",x*y);
}
int div(int x,int y){
    printf("%d",x/y);
}
int mod(int x,int y){
    printf("%d",x%y);
}