#include <stdio.h >
int main()
{
int c = 1427; float p = 1427.0;
printf("o, x, X, and any floating-point specifiers\n");
printf("Compare the output with the source code\n");
printf(" \n\n");
printf("%#o\n", c);
printf("%#x\n", c);
printf("%#X\n", c);
printf("\n%#g\n", p);
printf("%#G\n", p);
return 0;
}
