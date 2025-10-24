#include <stdio.h>

int main() {
    int age;
    int codingExperience;

    printf(" ");
    scanf("%d", &age);

    printf("");
    scanf("%d", &codingExperience);

    if (age >= 13 && age <= 18) {
        if (codingExperience > 3) {
            printf("You are eligible for the Intermediate\n");
        } else if (codingExperience >= 1) {
            printf("You are eligible for the Junior\n");
        } else {
            printf("You are not eligible\n");
        }
    } else {
        printf("You are not eligible\n");
    }

    return 0;
}
