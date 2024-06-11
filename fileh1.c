# include <stdio.h>

int main(){
    FILE *fptr;

    fptr = fopen("file1.txt","w");

    fprintf(fptr, "Hello World");

    printf("File created successfully");

    fclose(fptr);
    
}