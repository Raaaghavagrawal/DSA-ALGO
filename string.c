#include <stdio.h>
void printstring(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
int main()
{
    // char str[] = {'r','a','g','h','a','v','\0'};
    // char str[23] = "raghav";
    char str[23];
    gets(str);   /*use to take blank spaces in a string*/


    // 3 ways to print string 


    printstring(str);
    printf("\nThe entered string is %s by using printf\n",str);
    puts(str);


    return 0;
}
