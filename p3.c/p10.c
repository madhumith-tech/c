#include <stdio.h>

int main() {
    int basic_salary;
    float HRA, DA, gross_salary;

    printf("Enter Basic Salary: ");
    scanf("%d", &basic_salary);

    if (basic_salary <= 0) {
        printf("Invalid salary\n");
        return 0;
    }

    if (basic_salary <= 10000) {
        HRA = 0.20 * basic_salary;
        DA = 0.80 * basic_salary;
    } else if (basic_salary <= 20000) {
        HRA = 0.25 * basic_salary;
        DA = 0.90 * basic_salary;
    } else {
        HRA = 0.30 * basic_salary;
        DA = 0.95 * basic_salary;
    }

    gross_salary = basic_salary + HRA + DA;
    printf("Gross Salary = %.2f\n", gross_salary);

    return 0;
}
