#include <stdio.h>
int main()
{
    int i, marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks :\n");
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Entered marks are %d \n", marks[i]);
    }

    return 0;
}
