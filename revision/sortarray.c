#include <string.h>
#include <stdio.h>

void ascsort(char *);
int main(){
    char w[20];
    printf("Enter word: ");
    scanf("%s",w);
    ascsort(w);
    return 0;
}

void ascsort(char word[]){
    int l=strlen(word);
    char temp;

    for(int i=0; i<l; i++){
        for(int j=0; j<l-1-i; j++){
            if(word[j] > word[j+1]){
                temp=word[j];
                word[j]=word[j+1];
                word[j+1]=temp;
            }
        }
    }
    printf("%s",word);
}