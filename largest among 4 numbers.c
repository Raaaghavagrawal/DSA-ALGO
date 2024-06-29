#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter first number: \n");
    scanf("%d", &a);

    printf("Enter second number: \n");
    scanf("%d", &b);

    printf("Enter third number: \n");
    scanf("%d", &c);

    printf("Enter fourth number: \n");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("\nA is the largest among all numbers.\n\n");
    }
    else if (b > a && b > c && b > d)
    {
        printf("\nB is the largest among all numbers.\n\n");
    }
    else if (c > a && c > b && c > d)
    {
        printf("\nC is the largest among all numbers.\n\n");
    }
    else
    {
        printf("\nD is the largest among all numbers.\n\n");
    }

    return 0;
}
