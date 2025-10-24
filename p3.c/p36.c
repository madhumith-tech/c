#include <stdio.h>

int main() {
    int Sbase, Sbonus, Sallowance, E;
    int Stotal, S;
    float P;

    scanf("%d %d %d %d", &Sbase, &Sbonus, &Sallowance, &E);

    if (Sbonus < 0)
        Sbonus = 0;
    if (Sallowance < 0)
        Sallowance = 0;

    Stotal = Sbase + Sbonus + Sallowance;


    S = Stotal - E;


    if (Stotal == 0) {
        printf("Stotal = %d\n", Stotal);
        printf("S = %d\n", S);
        printf("P = undefined\n");
    } else {
        P = (S * 100.0f) / Stotal;
        printf("Stotal = %d\n", Stotal);
        printf("S = %d\n", S);
        printf("P = %.2f%%\n", P);
    }

    return 0;
}
