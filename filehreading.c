#include <stdio.h>

int main(){
    FILE *fptr;

    char myStr[200];

    fptr = fopen("file1.txt", "r");

    if (fptr != NULL){
        while(fgets(myStr,200,fptr)){
            printf("%s", myStr);
        }
    }
    else{
        printf("No such file found");
    }

    fclose(fptr);
}