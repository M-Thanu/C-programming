#include <stdio.h>

int main(){
    int ans;
    int std_ans[10];
    int count=0;

    //Getting answers from user and storing on an array
    for (int i=0; i<10; i++){
        printf("Enter your answers: ");
        scanf("%d", &ans);
        std_ans[i] = ans;
    }

    //Defining the correct answers array
    int crt_ans[] = {5,4,3,2,1,1,4,2,4,1};

    //Comparing the answers
    for (int k=0; k<10; k++){
        if (std_ans[k] == crt_ans[k]){
            count = count + 1;
        }
    }

    //Printing the score
    printf("Number of correct answers : %d for 10\n", count);
    printf("Your score: %d", count*10);

    return 0;
}


