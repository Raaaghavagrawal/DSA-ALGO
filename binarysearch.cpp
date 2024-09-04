#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int beg = 0;
    int end = size - 1;
    int mid = beg + (end - beg) / 2; // For out of range possibilities

    while (beg <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > mid)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = beg + (end - beg) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 5, 6, 9, 10, 12};
    int odd[5] = {1, 3, 5, 6, 8};

    int evenindex = binarySearch(even, 6, 12);
    cout << "Item found at the index: " << evenindex << endl;

    int oddindex = binarySearch(odd, 5, 20);
    cout << "Item found at the index: " << oddindex << endl;
    return 0;
}