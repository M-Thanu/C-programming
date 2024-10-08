#include <stdio.h>

int main() {
    char nam1[20];
    char nam2[20];
    printf("Comparing two strings");
    printf("\n_____________________");

    
    printf("\nInput the first string : ");
    scanf("%s",&nam1);
    
    printf("Input the second string : ");
    scanf("%s",&nam2);

    printf("String1: %s",nam1);
    printf("\nString2: %s",nam2);
    
        for (int i=0; ; i++){
            if (nam1[i]!=nam2[i]){
                printf("\nStrings are not equal");
                break;
            }
            if (nam1[i]=='\0'){
                break;
            }
        }
        printf("\nStrings are equal");
        return 0;
}