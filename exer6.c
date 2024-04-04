#include <stdio.h>

int addfun(int x, int y){
    return x+y;
}

int subfun(int x, int y){
    if (x>y){
        return x-y;
    }
    else{
        return y-x;
    }
}

int mulfun(int x, int y){
    return x*y;
}

int divfun(int x, int y){
    return x/y;
}

int main(){
    printf("Addition : %d\n",addfun(10,4));
    printf("Subtraction : %d\n",subfun(10,4));
    printf("Multiplication : %d\n",mulfun(10,4));
    printf("DIvision : %d",divfun(10,4));
}
    