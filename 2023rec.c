#include <stdio.h>
int Av(char word[], int l);
int main(){
    char word[30];
    scanf("%s",word);
    int k;
    k=Av(word,3);
    printf("%d",k);
    return 0;
}

int Av(char word[], int l){
    int j=0;
    int v;
    if(l == 0){
        return 0;
    }else{
        if(word[j]==Av(word[],l-1)){
            v=1;
            j++;
        }else{
            v=0;
            break;
        }
    }   
    return v;
}