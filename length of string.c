#include <stdio.h>
#include <string.h>
int main()
{
    char str[23];
    printf("enter the string :");
    scanf("%s", &str);

    int a = strlen(str);
    printf("The length of the string is %d", a);
    return 0;
}
