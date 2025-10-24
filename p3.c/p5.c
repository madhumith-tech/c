#include <stdio.h>
int main() {
    char name[50];
    int age, gender;
    scanf("%s", name);
    scanf("%d", &age);
    scanf("%d", &gender);

    if (age <= 0) {
        printf("Eligibility Status: Not Eligible\n");
        printf("Salutation: None\n");
    } else if (gender != 1 && gender != 2) {
        printf("Please type a valid gender\n");
    } else {
        if (age >= 18) {
            printf("Eligibility Status: Eligible\n");
            if (gender == 1)
                printf("Salutation: Mr. %s\n", name);
            else
                printf("Salutation: Ms. %s\n", name);
        } else {
            printf("Eligibility Status: Not Eligible\n");
            printf("Salutation: None\n");
        }
    }
    return 0;
}
