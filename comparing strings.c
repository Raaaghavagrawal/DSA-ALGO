#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    char str[20];
    printf("Enter the string :\n");
    scanf("%s", str1);

    printf("Enter the second string :\n");
    scanf("%s", str);

    int a = strcmp(str1, str);
    if (a == 0)
    {
        printf("Strings are same...");
    }
    else
    {
        printf("Strings are not same...");
    }
    
    return 0;
}
