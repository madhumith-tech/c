#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid Input");
    } else {
        int a = 0, b = 1, c;
        for (int i = 1; i <= n; i++) {
            printf("%d,", a);
            c = a + b;
            a = b;
            b = c;
        }
    }

    return 0;
}
