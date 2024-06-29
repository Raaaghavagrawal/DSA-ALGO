#include <stdio.h>
int main()
{
    int sum = 0;
    int i = 1;
    printf("the sum of first 10 natural nombers \n");
    while (i <= 10)
    {
        sum = sum + i;
        ++i;
    }
    printf("The sum is %d", sum);
    return 0;
}
