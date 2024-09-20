//with argument & with parameters
//with argument & without parameters
//without argument & with parameters
//without argument & without parameters\

# include <stdio.h>
int change(int *x);
int main( )
{
 int a = 5;
 printf("value of &a is : %d",&a);
 change(&a);
 printf("Value after function call is %d\n", a);
}
int change(int *x){
    printf("value of x is : %d\n",x);
 printf("Value inside the function before change is %d\n",*x);
 *x = *x+10;
 printf("Value inside the function after change is %d\n",*x);
}