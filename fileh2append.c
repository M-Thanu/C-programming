# include <stdio.h>

int main(){
    FILE *fptr;

    fptr = fopen("file1.txt","a");

    fprintf(fptr,"\nFile Handling");

    fclose(fptr);
}