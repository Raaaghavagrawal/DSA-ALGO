#include <stdio.h>
int main()
{
    printf("let's learn about pointers \n");
    int a = 23;
    int *ptra = &a;

    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",*ptra);
    printf("The actual value of a in pointers is %x\n",*ptra);
    printf("The address of pointers to a is %x\n",&ptra);
    printf("The address of a is %x\n",&a);
    return 0;
}
