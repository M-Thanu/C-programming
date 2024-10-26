#include <stdio.h>
#include <string.h>
int getLength(char w[]);
int sum(int a);
int main(){
    char word[20];
    printf("Enter String: ");
    scanf("%s",word);
    int le=0;
    le=getLength(word);
 
    int x=0;
    printf("Enter Integer: ");
    scanf("%d",&x);
    int k=0;
    k=sum(x);
    printf("Sum: %d",k);

    char or_word[le];
    strcpy(or_word,word);
    strrev(word);
    strcat(word,or_word);
    char xstr[3];
    sprintf(xstr,"%d",k);
    strcat(word,xstr);
    printf("Dum: %s",word);
    
    return 0;
}

int getLength(char w[]){
    int length=0;
    int i=0;
    while(w[i]!= '\0'){
        length = length + 1;
        i+=1;
    }
    return length;
    
}

int sum(int a){
    int s=0;
    if(a==0){
        return 0;
    }else{
        return a+sum(a-1);
    }
    
}