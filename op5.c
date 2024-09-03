#include <stdio.h>

int main() {
    int amount;
    int n1000, n500, n200, n100, n50, n20, n10, c5, c2, c1;

    // Input the amount
    printf("Enter the amount in Rupees: ");
    scanf("%d", &amount);

    // Calculate the number of each denomination
    n1000 = amount / 1000;
    amount %= 1000;

    n500 = amount / 500;
    amount %= 500;

    n200 = amount / 200;
    amount %= 200;

    n100 = amount / 100;
    amount %= 100;

    n50 = amount / 50;
    amount %= 50;

    n20 = amount / 20;
    amount %= 20;

    n10 = amount / 10;
    amount %= 10;

    c5 = amount / 5;
    amount %= 5;

    c2 = amount / 2;
    amount %= 2;

    c1 = amount; // Remaining amount will be the number of 1 Rupee coins

    
    printf("1000 Rupee notes: %d\n", n1000);
    printf("500 Rupee notes: %d\n", n500);
    printf("200 Rupee notes: %d\n", n200);
    printf("100 Rupee notes: %d\n", n100);
    printf("50 Rupee notes: %d\n", n50);
    printf("20 Rupee notes: %d\n", n20);
    printf("10 Rupee notes: %d\n", n10);
    printf("5 Rupee coins: %d\n", c5);
    printf("2 Rupee coins: %d\n", c2);
    printf("1 Rupee coins: %d\n", c1);

    return 0;
}
