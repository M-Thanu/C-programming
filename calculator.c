#include <stdio.h>

int main(){
    printf("Welcome to simple Calculator\n");
    printf("Please select an operation\n");
    printf("1 Addition\n");
    printf("2 Subtraction\n");
    printf("3 Multiplication\n");
    printf("4 Division\n");

    int choice;
    int fn;
    int sn;
    int res;

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the first number: ");
    scanf("%d", &fn);

    printf("Enter the second number: ");
    scanf("%d", &sn);

    if (choice == 1){
        res = fn + sn;
        printf("%d + %d = %d",fn,sn,res);
    }
    else if (choice == 2){
        if (fn > sn){
            res = fn - sn;
            printf("%d - %d = %d",fn,sn,res);
        }
        else{
            res = sn - fn;
            printf("%d - %d = %d",sn,fn,res);
        }
    }
    else if (choice == 3){
        res = fn * sn;
        printf("%d * %d = %d",fn,sn,res);
    }
    else if(choice == 4){
        res = fn / sn;
        printf("%d / %d = %d",fn,sn,res);
        printf("Outputs the approximate integer");
    }
    else{
        printf("Enter correct choice");
    }
    return 0;

}