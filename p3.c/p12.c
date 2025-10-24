#include <stdio.h>

int main() {
    int A, B, C;

    printf("Enter three angles of the triangle: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A > 0 && B > 0 && C > 0 && (A + B + C == 180)) {
        printf("Valid triangle\n");
    } else {
        printf("Invalid triangle\n");
    }

    return 0;
}
