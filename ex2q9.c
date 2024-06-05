#include <stdio.h>

int main(){
    char word[100];
    int l=0;

    printf("Enter the word: ");
    scanf("%s", &word);

    while (word[l] != '\0'){
        l++;
    }
    
    int ca=0;
    int ce=0;
    int ci=0;
    int co=0;
    int cu=0;

    for (int i=0; i<l; i++){
        switch(word[i]){
            case 'a':
                ca=ca+1;
                break;
            case 'e':
                ce=ce+1;
                break;
            case 'i':
                ci=ci+1;
                break;
            case 'o':
                co=co+1;
                break;
            case 'u':
                cu=cu+1;
                break;
        }
    }

   printf("The number of a in the word : %d\n",ca);
    printf("The number of e in the word : %d\n",ce);
    printf("The number of i in the word : %d\n",ci);
    printf("The number of o in the word : %d\n",co);
    printf("The number of u in the word : %d\n",cu);


    return 0;
}