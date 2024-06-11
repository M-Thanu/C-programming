#include <stdio.h>

int largeNo(int x, int y, int z){
    if (x > y){
        if (x>z){
            return x;
        }
    }
    else{
        if(y>z){
            return y;
        }
        else{
            return z;
        }
    }
}

int main(){
    int a,b,c;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);

    printf("%d",largeNo(a,b,c));
    
    return 0;
}