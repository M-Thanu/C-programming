#include <stdio.h>
int main(){
    int marks;
    int did;
    printf("Enter marks:");
    scanf("%d",&marks);
    printf("Enter District ID:");
    scanf("%d",&did);
    switch(did){
        case 1:
            if(marks>170){
                printf("Pass");
            }else{
                printf("Fail");
            }
            break;
        case 2:
            if(marks>150){
                printf("Pass");
            }else{
                printf("Fail");
            }
            break;
        case 3:
            if(marks>160){
                printf("Pass");
            }else{
                printf("Fail");
            }
            break;
        default:
            printf("Enter valid");
    }
    
    return 0;
}