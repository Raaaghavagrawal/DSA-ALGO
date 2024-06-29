

// Functions with arguments and without return value

#include <stdio.h>
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", '*');
    }
}
int main()
{
    int a;
    printf("how many stars you want print :\n");
    scanf("%d", &a);
    printstar(a);
    return 0;
}
