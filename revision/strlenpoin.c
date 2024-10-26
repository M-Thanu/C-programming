#include <stdio.h>
void lenstr(char *a);

int main(){
    char word[10];
    printf("Enter word: ");
    scanf("%s",word);

    lenstr(word);
    return 0;
}

void lenstr(char *a){
    int c=0;
    while(*a!='\0'){
        c+=1;
        a+=1;
    }
    printf("Count: %d",c);
}