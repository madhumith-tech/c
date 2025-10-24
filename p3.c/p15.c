#include <stdio.h>
int main() {
    int C, T;
    printf("Enter Credit Limit (C) and Transaction Amount (T): ");
    scanf("%d %d", &C, &T);

    if (C <= 0) {
        printf("Invalid credit limit\n");
        return 0;
    }

    if (T <= 0) {
        printf("Invalid transaction amount\n");
        return 0;
    }

    if (T <= C) {
        printf("Transaction Approved\n");
    } else {
        printf("Transaction Declined\n");
    }

    return 0;
}
