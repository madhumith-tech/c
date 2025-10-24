#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c == 'G')
    {
        printf("GO");
    }
    else if(c == 'Y')
    {
        printf("Wait");
    }
    else if(c == 'R')
    {
        printf("Stop");
    }
    else
    {
        printf("Invalid colour");
    }
    return 0;
}