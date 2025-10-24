#include <stdio.h>

int main() {
    int n, rev = 0, rem;
    scanf("%d", &n);
    if (n != 0)
    {
        rev = (n % 10) * 100;
        n = n / 10;
    }
    if (n != 0)
    {
        rev = (n % 10) * 10 + rev;
        n = n / 10;
    }
    if (n != 0)
    {
        rev = (n * 10) + rev;
    }
    printf("%d", rev);

    return 0;
}
