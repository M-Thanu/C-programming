#include <stdio.h>
#include <string.h>
#include <ctype.h>
void validation(char p[]);

int main(){
    char pwd[25];
    printf("Enter password: ");
    scanf("%s",pwd);
    validation(pwd);
    return 0;
}

void validation(char p[]){
    int d=0;
    int u=0;
    if(strlen(p)<6){
        printf("Rejected");
    }else{
        for(int i=0; i<strlen(p); i++){
            if(isdigit(p[i])){
                d=1;
            }
            if(isupper(p[i])){
                u=1;
            }
        }
        if((d==1) && (u==1)){
            printf("Selected");
        }else{
            printf("Rejected");
        }
    }
}