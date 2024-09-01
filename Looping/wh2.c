#include <stdio.h>

int main(){
    //ASCII value for a is 97
    int count =0;
    int i=97;

    while (count<26){
        printf("%c\t",i);
        i=i+1;
        count = count+1;
    }
    return 0;
}