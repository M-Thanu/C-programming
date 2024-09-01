#include <stdio.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    //Finding Last Digit
    int lastd=num%10;

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

    int firstd=num;
    printf("\nSummation of first digit and last digit is:%d",firstd+lastd);
    return 0;
}