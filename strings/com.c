#include <stdio.h>
#include <ctype.h>
int main(){
    char nam1[30];

    printf("First: ");
    gets(nam1);

    printf("%s",nam1);
    int al=0;
    int dl=0;
    int spl=0;

    for(int i=0; nam1[i]!=0;i++){
        if(isalpha(nam1[i])){
            al=al+1;
        }
        if(isdigit(nam1[i])){
            dl=dl+1;
        }
        if(!isalnum(nam1[i])){
            spl=spl+1;
        }
    }
    
    printf("\nNumber of Alphabets in the string is : %d",al);
    printf("\nNumber of Digits in the string is : %d",dl);
    printf("\nNumber of Special characters in the string is : %d",spl);

    return 0;
}