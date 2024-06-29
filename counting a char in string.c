#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char s[100];
    int count = 0;
    printf("Enter a string:\n");
    gets(s);
    printf("Enter the character to be searched: ");
    char a = getchar();

    for (int i = 0; s[i]; i++)
    {
        if (s[i] == a)
        {
            ++count;
        }
        
    }
    printf("The no. of character in the entered string is: %d",count);

    return 0;
}
