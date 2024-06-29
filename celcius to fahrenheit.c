#include <stdio.h>
float convertc_to_f(int c)
{
    return (c * 9 / 5) + 32;
}
int main()
{
    int c;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &c);
    float f = convertc_to_f(c); // calling the function to get F
    printf("\nTemperature is %.1f degrees fahrenheit.", f);
    return 0;
}
