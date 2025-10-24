#include <stdio.h>
int main() {
    int N, D, move;

    printf("Enter dice roll (N) and current position (D): ");
    scanf("%d %d", &N, &D);

    if (N < 1 || N > 6) {
        printf("Invalid Dice Roll\n");
        return 0;
    }

    if (D <= 0) {
        printf("Invalid Position of the Player\n");
        return 0;
    }

    if (N % 2 != 0) {
        move = D * 3;
        printf("Player moves forward %d units\n", move);
    } else {
        move = D / 3;
        printf("Player moves backward %d units\n", move);
    }

    return 0;
}
