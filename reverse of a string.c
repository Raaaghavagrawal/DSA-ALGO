#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Your entered string is %s", str);
    strrev(str);
    printf("\nThe reverse string is %s", str);
    return 0;
}
