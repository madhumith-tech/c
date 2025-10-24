#include<stdio.h>
int main()
{
    int m,n,o,p,q;
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&o);
    scanf("%d",&p);
    scanf("%d",&q);

    if(m<1 || n<1 || o<1 || p<1 || q<1 || m>100 || n>100 || o>100 || p>100 || q>100)
    {
        printf("Invalid Marks");
    }
    else
    {
        int sum = m + n + o + p + q;
        float a = sum / 5.0;
        printf("%.2f\n", a);

        if(a >= 85)
            printf("Grade A");
        else if(a >= 75)
            printf("Grade B");
        else if(a >= 65)
            printf("Grade C");
        else if(a >= 50)
            printf("Grade D");
        else
            printf("Grade F");
    }

    return 0;
}
