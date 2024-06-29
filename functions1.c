

// Function with arguments and return value

#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    a = 9;
    b = 97;
    int c = sum(a, b);
    printf("The sum is %d\n", c);
    return 0;
}
