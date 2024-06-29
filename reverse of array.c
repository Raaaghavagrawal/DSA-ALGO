#include <stdio.h>
void arrayrev(int arr[])
{
    for (int i = 8; i; i--)
    {
        printf("Now , The elemets of the array at %d is : %d\n", 8 - i, arr[i - 1]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 3, 4};
    printf("Original Array: \n");
    for (int i = 0; i < 8; ++i)
    {
        printf("The elements of the array at %d is : %d\n", i, arr[i]);
    }
    printf("\nReversed array: \n");
    // array rev function call here
    arrayrev(arr);

    return 0;
}
