#include <stdio.h>

int main() {
    int t1, t2; 
    
    printf("Enter start time : ");
    scanf("%d", &t1);

    printf("Enter end time : ");
    scanf("%d", &t2);

    int h1 = t1 / 100;
    int m1 = t1 % 100;
    int h2 = t2 / 100;
    int m2 = t2 % 100;

    int start = h1 * 60 + m1;
    int end   = h2 * 60 + m2;

    int diff = end - start;
    if (diff < 0) diff += 24 * 60; 

    printf("Duration = %d hours %d minutes\n", diff / 60, diff % 60);
    return 0;
}

