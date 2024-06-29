#include <stdio.h>
#define g 9.8
float force(int m)
{
    return m * g;
}
int main()
{
    int m;
    printf("Enter mass : \n");
    scanf("%d", &m);
    float a = force(m); // calling the function to get F
    printf("\nForce of attraction is %.1f N ", a);
    return 0;
}