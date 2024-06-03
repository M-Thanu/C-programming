#include <stdio.h>

int main(){
    int a;

    printf("Enter keyboard reading value: ");
    scanf("%d",&a);

    switch(a){
        case 10:
            printf("I want to be a Software Engineer!!!");
            break;
        
        case 30:
            printf("I want to be a Network Administrator!!!");
            break;

        case 60:
            printf("I want to be a System Analyst!!!");
            break;

        default:
            printf("I don't want to do a job!!!");
    }

    return 0;
}