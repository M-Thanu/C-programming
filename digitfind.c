#include <stdio.h>

int main(){
    int n;
    printf("Enter a number has above 2 digits: ");
    scanf("%d",&n);
    char mynum[] = n;
    printf("%d", mynum[1]);
}