#include <stdio.h>
void func1(int *ptr)
{
    for (int i = 0; i < 10; i++)
    {
        printf("The value at %d id %d\n", i, ptr[i]);
    }
    *(ptr + 2) = 80;
}
int main()
{
    int arr[] = {2, 32, 3, 5, 2, 5, 4, 1, 22, 63};
    func1(arr);
    printf("Now the third element is change by using ptr + 2\n");
    func1(arr);
    printf("\nAnd, hence ptr +2 points the third element of the array !!!");
    return 0;
}
