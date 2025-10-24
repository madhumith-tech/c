#include <stdio.h>
int main() {
    int railwayTime, hours, minutes;
    char *period;
    scanf("%d", &railwayTime);

    if (railwayTime < 0 || railwayTime > 2359) {
        printf("Invalid railway time input.\n");
        return 0;
    }
    hours = railwayTime / 100;
    minutes = railwayTime % 100;
    if (minutes < 0 || minutes > 59) {
        printf("Invalid railway time input.\n");
        return 0;
    }
    if (hours == 0) {
        hours = 12;
        period="AM";
    } else if (hours == 12) {
        period="PM";
    } else if (hours > 12) {
        hours -= 12;
        period="PM";
    } else {
        period="AM";
    }

    printf("12-Hour Time: %d:%02d %s\n", hours, minutes, period);

    return 0;
}
