#include <stdio.h>
int main()
{
    int a;
    printf("Enter a no. of which multiplication table you want in revrse order :\n");
    scanf("%d", &a);

    for (int i = a; i; i--)
    {
        printf("%d X %d = %d\n", a, i, a * i);
    }

    return 0;
}
