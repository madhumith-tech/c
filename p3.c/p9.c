#include <stdio.h>
int main() {
    int amount;
    int denominations[] = {500, 100, 50, 20, 10, 5, 2, 1};
    int notes[8] = {0};
    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);
    if (amount < 0) {
        printf("Invalid amount\n");
        return 0;
    }
    if (amount == 0) {
        printf("No cash needed\n");
        return 0;
    }
    for (int i = 0; i < 8; i++) {
        if (amount >= denominations[i]) {
            notes[i] = amount / denominations[i];
            amount = amount % denominations[i];
        }
    }
    printf("{");
    int first = 1;
    for (int i = 0; i < 8; i++) {
        if (notes[i] > 0) {
            if (!first) printf(", ");
            printf("%d: %d", denominations[i], notes[i]);
            first = 0;
        }
    }
    printf("}\n");

    return 0;
}
