#include <string.h>
#include <stdio.h>

int main(){
    char word[20]="mora";
    int l=0;
    l=strlen(word);
    char rev_word[l];
    int i;
    int j=0;
    for(i=l-1; i>=0; i--){
        rev_word[j]=word[i];
        j++;
    }
    rev_word[j]='\0';
    printf("%s",rev_word);
}