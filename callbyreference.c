#include <stdio.h>
void changenum(int *address)
{
    *address = 8006;
}
int main()
{
    int a=23,b=10;
    printf("Value of a and b is %d and %d respectively \n",a,b);
    changenum(&a);
    printf("Now the value of a and b is %d and %d respectively \n", a,b);
    return 0;
}
