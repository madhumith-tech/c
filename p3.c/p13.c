#include <stdio.h>

int main() {
    int L, W, area;

    printf("Enter Length and Width: ");
    scanf("%d %d", &L, &W);

    if (L <= 0 && W <= 0) {
        printf("Shape: Invalid (Length and Width cannot be negative)\n");
        printf("Area: Invalid\n");
    } else if (L <= 0) {
        printf("Shape: Invalid (Length cannot be negative)\n");
        printf("Area: Invalid\n");
    } else if (W <= 0) {
        printf("Shape: Invalid (Width cannot be negative)\n");
        printf("Area: Invalid\n");
    } else {
        area = L * W;
        if (L == W) {
            printf("Shape: Square\n");
        } else {
            printf("Shape: Rectangle\n");
        }
        printf("Area: %d\n", area);
    }

    return 0;
}
