#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number :\n");
    scanf("%d", &a);

    if (a % 97 == 0)
    {
        printf("the number is divisible by 97 :)\n");
    }
    else
    {
        printf("the number is not divisible by 97 :(");
    }
    return 0;
}
