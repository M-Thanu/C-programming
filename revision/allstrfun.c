#include <stdio.h>
#include <string.h>

int main(){
    char w1[20]="cat";
    char w2[20]="dog";

    printf("%d\t",strlen(w1));//3

    strcat(w1,w2);//catdog
    printf("%s\t",w1);

    strcpy(w1,w2);
    printf("%s\t",w1);//dog
   
    strrev(w1);//god
    printf("%s\t",w1);
    
    printf("%d",strcmp(w2,"dog"));// w2:dog so 0

    strncat(w1,w2,2);//goddo
    printf("%s\t",w1);


    return 0;
}