#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char target[23];
    char source[23];

    printf("Enter the string you want to copy :\n");
    scanf("%s",source);

    strcpy(target,source);
    printf("Now the target is %s",target);
    return 0;
}
