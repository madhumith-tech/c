#include <stdio.h>
int main() {
    int P, Q;
    float T, D, A;

    printf("Enter price (P) and quantity (Q): ");
    scanf("%d %d", &P, &Q);

    if (P <= 0 && Q < 1) {
        printf("Invalid price and quantity\n");
        return 0;
    } else if (P <= 0) {
        printf("Invalid price\n");
        return 0;
    } else if (Q < 1) {
        printf("Invalid quantity\n");
        return 0;
    }
    T = P * Q;
    if ((int)T % 2 == 0) {
        D = 0.10 * T;
    } else {
        D = 0.15 * T;
    }
    A = T - D;
    printf("A=%.2f\n", A);
    return 0;
}
