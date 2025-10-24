#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int roll_no, total_class, no_of_attended_class;
    int percentage;

    printf("Name= ");
    scanf(" %[^\n]", name);

    if (strlen(name) == 0) {
        printf("Name cannot be empty. (Program terminated)\n");
        return 0;
    }

    printf("Roll Number= ");
    scanf("%d", &roll_no);
    if (roll_no <= 0) {
        printf("Invalid Roll Number\n");
        return 0;
    }

    printf("Total_Classes: ");
    scanf("%d", &total_class);
    if (total_class <= 0) {
        printf("Invalid total number of class\n");
        return 0;
    }

    printf("No_of_Classes_Attended: ");
    scanf("%d", &no_of_attended_class);
    if (no_of_attended_class < 0) {
        printf("Invalid number of class\n");
        return 0;
    }

    if (no_of_attended_class > total_class) {
        printf("Number of attended class cannot be greater than total number of class\n");
        return 0;
    }
    percentage = (int)(((float)no_of_attended_class / total_class) * 100 + 0.5);

    printf("Attendance Percentage: %d%%\n", percentage);

    return 0;
}
