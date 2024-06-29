#include <stdio.h>
int main()
{
    int i, age;
    for (i = 0; i < 15; i++)
    {
        printf("%d\n Enter your age :", i);
        scanf("%d", &age);
        if (age > 15)
        {
            break;
        }
    }
    return 0;
}
