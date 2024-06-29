#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: \n");
    scanf("%d",&age);
    switch (age)
    {
        case 3:
            printf("The age is 3");
            break;
        case 13:
            printf("The age is 13");
            break;
        case 23:
            printf("The age is 23");
            break;
    
        default:
        printf("The age is not 3 , 13 , 23");
            break;
    }
    return 0;
}
