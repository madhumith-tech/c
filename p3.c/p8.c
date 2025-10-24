#include <stdio.h>

int main() {
    int x;
    printf("Enter order quantity: ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("Order has no proper quantity specified.\n");
    } else if (x < 70) {
        printf("Order Confirmed.\n");
    } else {
        printf("Order Limit Reached.\n");
    }

    printf("Thank YOU!\n");

    return 0;
}
