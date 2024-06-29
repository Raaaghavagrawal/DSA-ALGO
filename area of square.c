#include <stdio.h>
int main()
{
    int side, area;
    printf("Enter the length of a square: \n"); // Taking input from user for calculating area
    scanf("%d", &side);
    area = side * side;
    printf("\nThe Area is %d", area); // Printing output to display calculated value

    return 0;
}
