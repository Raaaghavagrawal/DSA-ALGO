#include <stdio.h>
void count_positive(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) > 0)
        {
            ++count;
        }
    }
    printf("positive integers in the arrays are: %d\n", count);
}
int main()
{
    int arr[] = {-1, -9, -55, 5, 8, -33, 95, 0};
    int n = 7;
    count_positive(arr, n);
    return 0;
}
