#include <stdio.h>

#define PRINT(n) do {\
    for (int i = 0; i < (n); i++) {\
        printf("Batch 20\n");\
    }\
} while (0)

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);  
    
    PRINT(n);  
    return 0;
}
