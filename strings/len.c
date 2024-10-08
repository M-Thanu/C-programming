#include <stdio.h>
int main() {
    char nam1[20];
    char nam2[20];
    printf("Check the length of two strings");
    printf("\n_____________________");

    
    printf("\nInput the first string : ");
    scanf("%s",&nam1);
    
    printf("Input the second string : ");
    scanf("%s",&nam2);

    printf("String1: %s",nam1);
    printf("\nString2: %s",nam2);
    int cou1=0;
    int cou2=0;
        for (int i=0; ; i++){
            if (nam1[i]!='\0'){
                cou1 = cou1 + 1;
                break;
            }
        }
        for (int i=0; ; i++){
            if (nam2[i]!='\0'){
                cou2 = cou2 + 1;
                break;
            }
        }

        if (cou1 == cou2){
            printf("\nStrings are equal");
        }else{
            printf("\nStrings are not equal");
        }
        
        return 0;
}