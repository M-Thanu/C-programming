#include <stdio.h>
int main(){
    int marks=0;
    printf("Enter marks: ");
    scanf("%d",&marks);

    if(marks>=100){
        printf("Pass");
    }else{
        printf("Fail");
    }
    return 0;
}