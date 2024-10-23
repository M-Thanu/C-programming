#include <stdio.h>
#include <string.h>

void ascsort(char word[]);

int main(){
    char w[20];
    printf("Enter: ");
    scanf("%s",w);
    ascsort(w);
    return 0;
}

void ascsort(char word[]){
    int l=strlen(word);
    char temp;
    for(int i=0; i<l-1; i++ ){
        for(int j=0; j<l-i-1; j++){
            if(word[j]>word[j+1]){
                temp = word[j];
                word[j] = word[j+1];
                word[j+1] = temp;
            }
        }
    }
    printf("%s",word);
}