#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if ((n >= 10000 && n <= 99999) || (n <= -10000 && n >= -99999)) {
        printf("%d is a five-digit number", n);
    } else {
        printf("%d is not a five-digit number", n);
    }

    return 0;
}

