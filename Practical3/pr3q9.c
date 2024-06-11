#include <stdio.h>

int largeNo(int x, int y){
    if (x > y){
            return x;
    }
    else{
        return y;
    }
}

int main(){
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);

    printf("%d",largeNo(a,b));
    
    return 0;
}