#include <stdio.h>
int main()
{
    int physics;
    int chemistry;
    int maths;

    printf("Enter your physics marks out of 100:\n");
    scanf("%d", &physics);

    printf("Enter your chemistry marks out of 100:\n");
    scanf("%d", &chemistry);

    printf("Enter your maths marks out of 100:\n");
    scanf("%d", &maths);

    int avg = ((physics + chemistry + maths) / 3);

    if (avg >= 40)
    {
        printf("You are above 40 percentage overall");
        if (physics >= 33 && chemistry >= 33 && maths >= 33)
        {
            printf("\nand you have PASSED in all subjects ");
        }
        else
        {
            printf(", but not yet scored well enough to pass.");
        }
    }
    else
    {
        printf("You got below 40 percentage so you are FAILED ");
    }

    return 0;
}
