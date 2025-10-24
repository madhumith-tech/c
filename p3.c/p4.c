#include <stdio.h>

int main() 
{
    int C, S, P;
    int valid = 1;

    printf("C= ");
    scanf("%d", &C);
    printf("S= ");
    scanf("%d", &S);

    if (C < 0) {
        printf("Error: Cost price(C) cannot be negative\n");
        valid = 0;
    }
    if (S < 0) {
        printf("Error: Selling price(S) cannot be negative\n");
        valid = 0;
    }

    if (valid) {
        P = S - C;
        printf("P = %d\n", P);

        if (P > 0) {
            printf("Result: Profit\n");
        }
        else if (P < 0) {
            printf("Result: Loss\n");
        }
        else {
            printf("Result:Break-Even\n");
        }
    }

    return 0;
}
