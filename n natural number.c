#include <stdio.h>
int main()
{
    int n;
    printf("Enter limit of how many natural numbers you want :\n");
    scanf("%d",&n);

    for ( int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}
