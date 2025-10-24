
#include <stdio.h>

int main() {
    char c;

    printf(" ");
    scanf(" %c", &c);  

    if (c == 'R') {
        printf("Stop");
    }
    else if (c == 'G' ) {
        printf("Go");
    }
    else if (c == 'Y' ) {
        printf("Wait");
    }
    else {
        printf("Invalid input");
    }

    return 0;
}


