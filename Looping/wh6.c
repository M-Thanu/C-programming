#include <stdio.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int a=0;
    char Snum[30];

    int i=0;
    while(num!=0){
        a=num%10;
        Snum[i]=a+'0';
        num=num/10;
        i=i+1;
    }
    Snum[i]='\0';
   
    printf("\nNew: %s",Snum);
    return 0;
}