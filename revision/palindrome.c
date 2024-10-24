#include <stdio.h>

int main(){
    char word[30];
    int c=0;

    printf("Enter Word: ");
    fgets(word,30,stdin);
    
    int k=0;
        while(word[k] != '\n'){
            c = c+1;
            k++;
        }


    int i,j=0;
    i=c-1;
    int p=0;

    while(j<i){
        if(word[i] == word[j]){
            p=1;
        }else{
            p=0;
        }
        j++;
        i--;
    }

    if(p==1){
        printf("Palindrome");
    }else{
        printf("Not a palindrome");
    }


    return 0;
}