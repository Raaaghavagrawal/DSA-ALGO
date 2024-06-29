#include <stdio.h>
int main()
{
    int n;
    printf("Enter limit of how many natural numbers you want in reverse order :\n");
    scanf("%d",&n);

    for ( int i = n; i; i--)
    {
        printf("%d\n",i);
    }
    
    return 0;
}
