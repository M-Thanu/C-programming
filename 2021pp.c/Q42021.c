#include <stdio.h>
int main(){
    int marks[30];
    int t=0;
    for (int i=0; i<5; i++){
        printf("Enter Marks: ");
        scanf("%d",&marks[i]);
        t=t+marks[i];
    }
    printf("Avaerage : %d",t/5);
    return 0;
}