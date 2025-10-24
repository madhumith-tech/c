#include <stdio.h>
#include <math.h>

int main() {
    int octal, decimal = 0, i = 0;
    char hexadecimal[20];
    scanf("%d", &octal);
    int temp = octal;
    while (temp != 0) {
        int digit = temp % 10;
        decimal += digit * pow(8, i);
        i++;
        temp /= 10;
    }
    i = 0;
    while (decimal != 0) {
        int remainder = decimal % 16;
        if (remainder < 10)
            hexadecimal[i] = remainder + '0';
        else
            hexadecimal[i] = remainder - 10 + 'A';
        i++;
        decimal /= 16;
    }
    hexadecimal[i] = '\0';
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hexadecimal[j]);

    return 0;
}
