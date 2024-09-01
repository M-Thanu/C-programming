#include <stdio.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    //Finding Last Digit
    printf("Last digit:%d",num%10);

    //Finding First Digit

    //Finding the count
    int fd;
    fd=num;
    int count=0;

    while(fd!=0){
        count = count+1;
        fd = fd/10;
    }
    //Finding
    int i=1;
    while(i<count){
        num=num/10;
        i=i+1;
    }

    printf("\nThe first digit is: %d",num);
    return 0;
}