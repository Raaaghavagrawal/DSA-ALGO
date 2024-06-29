#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[100];
    printf("Enter 1st string : ");
    gets(str);

    char ss[100];
    printf("Enter 2nd string : ");
    gets(ss);

    // strcat(str, ss);
    puts(strcat(str,ss));
    return 0;
}
