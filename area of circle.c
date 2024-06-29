#include <stdio.h>
int main()
{
    int r;
    const float pi = 3.14;
    printf("Enter the radius of cirle :");
    scanf("%d",&r);

    printf("The area of circle is %0.2f \n",(pi*r*r));
    return 0;
}
