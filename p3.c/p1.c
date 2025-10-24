#include <stdio.h>
int main() {
    int salary;
    char gender;
    float bonus;

    scanf("%d %c", &salary, &gender);

    if (salary <= 0) {
        bonus = 0;
        printf("%.2f\n", bonus);
        return 0;
    }

    if (gender != 'M' && gender != 'F') {
        printf("Gender should be 'M' for Male and 'F' for Female\n");
        return 0;
    }
    

    if (salary <= 25000) {
        bonus = 5000;
    } else if (salary <= 50000) {
        bonus = 7500;
    } else {
        if (gender == 'M')
            bonus = salary * 0.10;
        else
            bonus = salary * 0.15;
    }

    printf("%.2f\n", bonus);

    return 0;
}
