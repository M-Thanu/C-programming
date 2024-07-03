#include <stdio.h>

int main(){
    
    int num;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;
    int c5 = 0;
    int c6 = 0;
    int c7 = 0;
    int c8 = 0;
    int c9 = 0;

    printf("Enter the number: ");
    scanf("%d",&num);

    while (num>0){
        switch(num%10){
            case 1:
                c1 +=1;
                break;
            case 2:
                c2 +=1;
                break;
            case 3:
                c3 +=1;
                break;
            case 4:
                c4 +=1;
                break;
            case 5:
                c5 +=1;
                break;
            case 6:
                c6 +=1;
                break;
            case 7:
                c7 +=1;
                break;
            case 8:
                c8 +=1;
                break;
            case 9:
                c9 +=1;
                break;
        }
        num = num/10;
    }
        
   
   printf("The count of 1 is : %d\n",c1);
   printf("The count of 2 is : %d\n",c2);
   printf("The count of 3 is : %d\n",c3);
   printf("The count of 4 is : %d\n",c4);
   printf("The count of 5 is : %d\n",c5);
   printf("The count of 6 is : %d\n",c6);
   printf("The count of 7 is : %d\n",c7);
   printf("The count of 8 is : %d\n",c8);
   printf("The count of 9 is : %d\n",c9);

    return 0;
}