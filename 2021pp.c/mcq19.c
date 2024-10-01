#include <stdio.h>
int main(){
    struct car{int color;};
    struct garage{struct car mycar[10];}gar;
    struct car c1={5};
    gar.mycar[0]=c1;
    printf("%d",gar.mycar[0]);
    
    return 0;
}