#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a == b)
        printf("%d", a * b);
    else
        printf("%.2f", fabs((float)a / b));
    
    return 0;
}

