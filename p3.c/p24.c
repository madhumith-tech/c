#include<stdio.h>
int main()
{
    int units,cost;
    printf(" ");
    scanf("%d",&units);
    if(units <=0 && units >= 100)
    {
        cost = 0;
    }
    else if (units>100 && units<=300)
    {
        cost=(units-100)*2;
    }
    else
    {
        cost=((units-100)*2+(units-300)*5);
    }
    printf("%d",cost);
    return 0;
}