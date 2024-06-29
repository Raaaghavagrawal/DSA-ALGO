#include <stdio.h>
typedef struct student
{
    int id;
    int marks;
    char name[34];
} std;
int main()
{
    std s1, s2;
    s1.id = 001;
    s2.id = 002;
    printf("Value of s1'ID is %d\n", s1.id);
    printf("Value of s2'ID is %d\n", s2.id);
    return 0;
}
