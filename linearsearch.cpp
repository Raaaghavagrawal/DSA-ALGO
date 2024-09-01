#include <iostream>
using namespace std;
bool searchitem(int arr[], int n, int item)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == item)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {2, 3, 8, -10, -8, 7, 55, 89, -7, 5};

    int item;
    cout << "Enter the element to be searched" << endl;
    cin >> item;

    bool found = searchitem(arr, 10, item);
    if (found)
    {
        cout << "Item is present" << endl;
    }
    else
    {
        cout << "Item is absent" << endl;
    }
    return 0;
}