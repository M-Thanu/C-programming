#include <stdio.h>
int main() {
    char nam1[20];
    
    printf("Input the string : ");
    scanf("%s",&nam1);

    int v=0;
    int c=0;
    for(int i=0; nam1[i]!=0;i++){
        if (nam1[i]=='a'|| nam1[i]=='e' || nam1[i]=='i' || nam1[i]=='o' || nam1[i]=='u'){
            v++;
        }else if (nam1[i]=='A'|| nam1[i]=='E' || nam1[i]=='I' || nam1[i]=='O' || nam1[i]=='U'){
            v++;
        }else{
            c++;
        }
    }
    printf("\nThe total number of vowel in the string is : %d",v);
    printf("\nThe total number of consonant in the string is : %d",c);
        
    return 0;
}