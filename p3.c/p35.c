#include <stdio.h>

int main() {
    int hh,mm;
    char *period;
    scanf("%d %d",&hh,&mm);
    if(hh==0)
    {
        hh=12;
        period="AM";
    }
    else if(hh<12)
    {
        period="AM";
    }
    else if(hh==12)
    {
        period="PM";
    }
    else
    {
        hh=hh-12;
        period="PM";
    }
    printf("%02d:%02d %s",hh,mm,period);

    return 0;
}