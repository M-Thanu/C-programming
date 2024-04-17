#include <stdio.h>

/*int main(){
    char ct;
    int total = 0;

    while (total<4){
        printf("Enter ct : ");
        scanf("%c", &ct);

        if (ct = 'M'){
            total = total + 1;
            printf("increase in M\n");
        }
        else if (ct = 'F'){
            total += 1;
            printf("increase in F\n");
        }
        else {
            printf("Error\n");
        }
    }
    printf("No more increases");
}*/

int main(){
    int a;
    int count = 0;

    while (count<4){
        printf("Enter a : ");
        scanf("%d",&a);

        if (a == 5){
            printf("Five/n");
            count+=1;
        }
        else {
            printf("Check your input/n");
        }
    }
    printf("loop ended");
}