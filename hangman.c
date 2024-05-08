#include<stdio.h>

int main(){
    //char words[][10] = {"Swimming", "Owner", "Flower", "Teddybear", "Furniture"};
    printf("The Hangman Game\n");
    printf("Guess the word\n");
    Swimming();
    char ans;
    for (int j=0; j<5; j++){
        printf("Input your answers: ");
        scanf("%c",&ans);
        /*if (ans == swimming[j]){
            printf("Correct Guess, Go On\n");
        }
        else{
            printf("Give a try\n");
        }*/
        printf("%d\n",ans);
    }
}

void Swimming(){
    //char words[][10] = {"Swimming", "Owner", "Flower", "Teddybear", "Furniture"};
    char swimming[] = "swimming";
    int length = sizeof(swimming);
    for (int i=0; i<length; i++){
        printf("_");
    }
    printf("\n");
}
