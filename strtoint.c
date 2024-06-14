# include <stdio.h>

int main(){
    char Snum[30];
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    sprintf(Snum, "%d", num);

    printf("%c", Snum[1]);
    return 0;
}