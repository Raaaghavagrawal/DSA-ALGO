#include <iostream>
using namespace std;
void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[6] = {1, 2, 3, 6, 4, 5};
    int arr2[5] = {5, 6, 5, 8, 6};

    swapAlternate(arr1, 6);
    printArray(arr1, 6);
    swapAlternate(arr2, 5);
    printArray(arr2, 5);
    return 0;
}