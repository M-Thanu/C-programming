#include <stdio.h>
void main()
{
printf("Printing floating-point numbers with\n");
printf("floating-point conversion specifiers.\n");
printf("Compare the output with source code\n\n");
printf("1. %e\n", 1234567.89);
printf("2. %e\n", +1234567.89);
printf("3. %e\n", -1234567.89);
printf("4. %E\n", 1234567.89);
printf("5. %f\n", 1234567.89);
printf("6. %g\n", 1234567.89);
printf("7. %G\n", 1234567.89);
}
