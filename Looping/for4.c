#include <stdio.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    for(int i=1; i<=16; i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}