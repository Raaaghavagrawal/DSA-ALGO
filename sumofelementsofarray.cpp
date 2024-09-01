#include <iostream>
using namespace std;
int sumofArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int sum = sumofArray(arr, size);
    cout << sum;
    return 0;
}