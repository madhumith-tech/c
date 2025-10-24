#include <stdio.h>
#include <math.h>
int main() {
    int P;
    float R, T, A;

    scanf("%d %f %f", &P, &R, &T);

    if (P < 1 || P > 2147483647) {
        printf("Error: Principal amount must be between 1 and 2147483647.\n");
        return 0;
    }

    if (R < 1.0 || R > 8.5) {
        printf("Error: Interest rate must be between 1.0 and 8.5.\n");
        return 0;
    }

    if (T < 0) {
        printf("Error: Time period must be non-negative.\n");
        return 0;
    }
    A = P * pow((1 + R / 100), T);
    printf("A = %.2f\n", A);

    return 0;
}
