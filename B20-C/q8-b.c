#include <stdio.h>
void change(int k, int j);
int main(){
    int a=0;
    int b=0;
    printf("First: ");
    scanf("%d",&a);
    printf("Second: ");
    scanf("%d",&b);
    change(a,b);
 
    return 0;
}
void change(int k, int j){
    int temp=k;
    k = j;
    j= temp;

    printf("First: %d",k);
    printf("\nSecond: %d",j);   

}