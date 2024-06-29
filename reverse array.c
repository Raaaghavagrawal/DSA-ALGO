#include <stdio.h>
void reversearray(int *array , int n)
{
    for (int i = n-1 ; i>=0 ; i--)
    {
        printf("{%d}",array[i]);
    }
    
}
int main()
{
    int arr[] = {1,2,56,6,45};
    int n = 5;
    reversearray(arr , n);
    return 0;
}
