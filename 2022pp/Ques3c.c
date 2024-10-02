#include <stdio.h>
#include <string.h>

void getLength(int x);
int getSum(int z);

int main(){
    char pwd[20];
    int x=0;
    printf("Enter String: ");
    scanf("%s",&pwd);
    printf("Enter Integer: ");
    scanf("%d",&x);
    int l = getSum(x);
    
    int k;
    for (int a=0; a<20; a++){
        if (pwd[a]=='\0'){
            break;
        }else{
            getLength(pwd[a]);
        }
    }
    k = strlen(pwd);

    char rpwd[20];
    int j=0;
    for (int i=k-1; i>=0; i--){
        rpwd[j]= pwd[i];
        j++;
    }
    rpwd[j] = '\0';
    strcat(rpwd,pwd);
    char lst[10];
    sprintf(lst,"%d",l);
    strcat(rpwd,lst);
    printf("Final: %s",rpwd);
    
    return 0;
}

void getLength(int x){
    int sum=0;
    sum = sum + 1;
}
int getSum(int z){
    int sum =z;
    if (z == 0){
        return 0;
    }else{
        return z + getSum (z-1);
    }
    
   
}