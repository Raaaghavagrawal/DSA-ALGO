#include <stdio.h>
#include <string.h>
int main()
{
    char s[23];
    printf("Enter the string: \n");
    gets(s);

    printf("Enter character to be searched in the string :\n");
    char a = getchar();

    for (int i = 0; s[i]; i++)
    {
        if (s[i] == a)
        {
            printf("the character is present in the string...");
            break;
        }
    }

    return 0;
}
