#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    a=65;
    b=16;
    c=a & b;
    printf("c=%d \n",c);
    c=a|b;
    printf("c=%d \n",c);
    c=~a;
    printf("c=%d \n",c);
    c=a^b;
    printf("c=%d \n",c);
} 