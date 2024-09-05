#include <stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter the length of side 1: ");
    scanf("%d",&s1);
    printf("Enter the length of side 2: ");
    scanf("%d",&s2);
    printf("Enter the length of side 3: ");
    scanf("%d",&s3);

    if((s1==s2)&&(s2==s3)){
        printf("Equilateral Triangle");
    }else if((s1==s2)||(s1==s3)||(s2==s3)){
        printf("Isosceles Triangle");
    }else{
        printf("Scalene triangle");
    }
}