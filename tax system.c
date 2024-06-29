#include <stdio.h>
int main()
{
    int a;
    printf("Enter your income slab :\n");
    scanf("%d",&a);

    if (a < 250000) 
    {
        printf("No tax for this income range");
    }
    else if (a >= 250000 && a <= 500000)
    {
        printf("You have to pay 5 percent of tax !!!\n");
    }
    else if (a >= 500000 && a <= 1000000)
    {
        printf("You have to pay 20 percent of tax !!!\n");
    }
    else if (a > 1000000)
    {
        printf("You have to pay 30 percent of tax !!!\n");
    }
    else{
        printf("Thank You !!!");
    }
    return 0;
}
