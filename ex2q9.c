#include <stdio.h>

int main(){
    char word[20];

    printf("Enter the word: ");
    scanf("%s", &word);

    /*char a = 'a';
    char e = 'e';
    char i = 'i';
    char o = 'o';
    char u = 'u';*/

    int ca=0;
    int ce=0;
    int ci=0;
    int co=0;
    int cu=0;

    int l = sizeof(word);

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
        /*if (word[i] == 'a'){
            ca+=1;
        }
        else if (word[i] == 'e'){
            ce+=1;
        }
        else if (word[i] == 'i'){
            ci+=1;
        }
        else if (word[i] == 'o'){
            co+=1;
        }
        else if (word[i] == 'u'){
            cu+=1;
        }*/
    }

    printf("The number of a in the word : %d\n",ca);
    printf("The number of e in the word : %d\n",ce);
    printf("The number of i in the word : %d\n",ci);
    printf("The number of o in the word : %d\n",co);
    printf("The number of u in the word : %d\n",cu);


    return 0;
}