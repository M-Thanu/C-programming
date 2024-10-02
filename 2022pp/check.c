#include <stdio.h>
int main(){
    char name[3][2];
for (int i=0; i<3; i++){
    printf("HI : ");
    scanf("%s",&name[i]);
}
for (int i=0; i<3; i++){
    printf("HI : %s",name[i]);
}
    
    return 0;
}