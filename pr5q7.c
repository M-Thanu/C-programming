#include <stdio.h>

//Function to find largest number and whether it is odd or even
void LargeNumber(int x,int y,int z){
        if (x>y && x>z){
            printf("The Largest Number is : %d\n",x);
            if (x % 2 == 0){
                printf("%d is even\n",x);
            }
            else{
                printf("%d is odd\n",x);
            }
        }
        else if(y>z && y>x){
            printf("The Largest Number is : %d\n",y);
            if (y % 2 == 0){
                printf("%d is even\n",y);
            }
            else{
                printf("%d is odd\n",y);
            }
        }
        else if(z>x && z>y){
            printf("The Largest Number is : %d\n",z);
            if (z % 2 == 0){
                printf("%d is even\n",z);
            }
            else{
                printf("%d is odd\n",z);
            }
        }
    }

//Function to find smallest number and whether it is odd or even
void SmallNumber(int x,int y,int z){
        if (x<y && x<z){
            printf("The Smallest Number is : %d\n",x);
            if (x % 2 == 0){
                    printf("%d is even\n",x);
                }
                else{
                    printf("%d is odd\n",x);
                }
        }
        else if(y<z && y<x){
            printf("The Smallest Number is : %d\n",y);
            if (y % 2 == 0){
                printf("%d is even\n",y);
            }
            else{
                printf("%d is odd\n",y);
            }
        }
        else if(z<x && z<y){
            printf("The Smallest Number is : %d\n",z);
            if (z % 2 == 0){
                printf("%d is even\n",z);
            }
            else{
                printf("%d is odd\n",z);
            }
        }
    }

int main(){
    //Variable declaration
    int a;
    int b;
    int c;

    //Taking inputs from user
    printf("Enter the number :");
    scanf("%d",&a);
    printf("Enter the number :");
    scanf("%d",&b);
    printf("Enter the number :");
    scanf("%d",&c);

    //Calling function
    LargeNumber(a,b,c);
    SmallNumber(a,b,c);

    return 0;
}