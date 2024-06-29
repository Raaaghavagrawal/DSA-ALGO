#include <stdio.h>
int main()
{
    int a;
    printf("Enter Year to check :\n");
    scanf("%d", &a);

    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
    {
        // Leap year
        printf("leap year.....\n");
    }
    else{
        printf("not a leap year .... \n");
    }
    
    return 0;
}
