#include <stdio.h>
int main(){
    int marks=0;
    printf("Enter marks: ");
    scanf("%d",&marks);
    int District_ID=0;
    printf("Enter District ID(Colombo : 1 , Jaffna : 2 , Kandy : 3): ");
    scanf("%d",&District_ID);

    switch(District_ID){
        case 1:
            if(marks>=170){
                printf("Pass");
            }else{
                printf("Fail");
            }
            break;
        case 2:
            if(marks>=150){
                printf("Pass");
            }else{
                printf("Fail");
            }
            break;
        case 3:
            if(marks>=160){
                printf("Pass");
            }else{
                printf("Fail");
            }
            break;
        default:
            printf("Invalid District ID");
    }
    return 0;
}