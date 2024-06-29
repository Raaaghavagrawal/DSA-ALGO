#include <stdio.h>
int main()
{
    label:
        printf("Hello World\n");
        goto end;
    goto label;
    end:
        printf("we are end !!!\n");
    return 0;
}
