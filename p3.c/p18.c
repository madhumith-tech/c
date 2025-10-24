#include <stdio.h>

int main() {
    int units;
    float cost = 0;
    printf(" ");
    scanf("%d", &units);
    if (units <= 100) 
    {
        cost = 0;
    } else if (units <= 300)
    {
        cost = (units - 100) * 2;
    } else 
    {
        cost = (200 * 2) + (units - 300) * 5;
    }

    printf("%.2f\n", cost);

    return 0;
}
