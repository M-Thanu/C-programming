#include <stdio.h>
int main()
{
printf("Right justifying and left justifying values.\n");
printf(" Compare the output with the source code.\n");
printf(" \n\n");
printf("%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23);
printf("%-10s%-10d%-10c%-10f\n", "hello", 7, 'a', 1.23);
return 0;
}
