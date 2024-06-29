#include <stdio.h>
int main()
{
    int marks;

    printf("Enter your marks :\n");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 9:
        printf("Congratulations !!  you got 'A' grade");
        break;
    case 8:
        printf("Not Bad !!  you got 'B' grade");
        break;
    case 7:
        printf("Work Hard !!  you got 'C' grade");
        break;
    case 6:
        printf("Keep Trying !!  you got 'D' grade");
        break;
    case 5:
        printf("Consentrate on yourself !!  you got 'E' grade");
        break;
    case 4:
        printf("Better luck next time !!  you got 'F/Failed' grade");
        break;

    default:
        break;
    }
    return 0;
}
