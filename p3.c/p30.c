#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    if(m==n)
    {
        printf("%d",m*n);
    }
    else
    {
        
        printf("%d",abs(m/n));
    }
    return 0;
}