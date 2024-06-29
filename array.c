#include <stdio.h>
int main()
{
    int marks[5];
    for ( int  i = 0; i < 5; i++)
    {
        printf("Enter %d element on a array \n ",i);
        scanf("%d", &marks[i]);
    }
    for ( int  i = 0; i < 5; i++)
    {
        printf("The %d element on a array is %d \n ",i,marks[i]); 
    }
    
    return 0;
}
