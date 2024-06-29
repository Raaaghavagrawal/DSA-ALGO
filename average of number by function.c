#include <stdio.h>
float average(float a, float b, float c)
{
    return (a + b + c) / 3;
}
int main()
{
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;
    float d = average(a, b, c);
    printf("The Average of %d, %d and %d is %.2f",a,b,c,d);
    return 0;
}
