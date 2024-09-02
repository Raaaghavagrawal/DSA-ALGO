#include <iostream>
using namespace std;
void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(start[arr], end[arr]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
}
int main()
{
    int arr1[6] = {3, 4, 6, 9, 8, 5};
    int arr2[5] = {58, 9, 7, 6, 1};

    reverseArray(arr1, 6);
    reverseArray(arr2, 5);

    printArray(arr1, 6);
    printArray(arr2, 5);
    return 0;
}