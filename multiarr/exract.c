#include <stdio.h>
int main(){
    char name[20];
    printf("Enter: ");
    gets(name);
    int n,c;
    printf("Enter position and amount : ");
    scanf("%d %d",&n,&c);
    for (int i=n; i<n+c+1; i++){
        printf("%c",name[i]);
    }
    return 0;

}