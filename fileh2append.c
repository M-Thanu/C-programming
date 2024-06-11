# include <stdio.h>

int main(){
    FILE *fptr;

    fptr = fopen("file1.txt","a");

    printf("File accessed");

    fprintf(fptr,"\nFile Handling");

    printf("\nNote written");

    fclose(fptr);
}