#include <stdio.h>

//Declaring the function 
void oddoreven(int x){
    if (x % 2 == 0){
        printf("%d is even\n", x);
    }
    else{
        printf("%d is odd\n", x);
    }
}

int main(){
    int n,c;

    //Getting count from user
    printf("Enter how many numbers you want to check: ");
    scanf("%d",&c);

    for (int i=0; i<c; i++){
        //Getting the numbers from user
        printf("Enter the number : ");
        scanf("%d", &n);

        //Checking the numbers
        oddoreven(n);
    }

   
    return 0;
}