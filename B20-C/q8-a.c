#include <stdio.h>
void pchange(int *k, int *j);
int main(){
    int a=0;
    int b=0;
    printf("First: ");
    scanf("%d",&a);
    printf("Second: ");
    scanf("%d",&b);
    pchange(&a,&b);

    printf("First: %d",a);
    printf("\nSecond: %d",b);    
    return 0;
}
void pchange(int *k, int *j){
    int temp=*k;
    *k = *j;
    *j= temp;

}