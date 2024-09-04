#include <iostream>
using namespace std;
int firstOccurence(int arr[], int size, int key)
{
    int beg = 0;
    int end = size - 1;
    int mid = beg + (end - beg) / 2;
    int ans = -1;

    while (beg <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = beg + (end - beg) / 2;
    }
    return ans;
}
int lastOccurence(int arr[], int size, int key)
{
    int beg = 0;
    int end = size - 1;
    int mid = beg + (end - beg) / 2;
    int ans = -1;

    while (beg <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            beg = mid + 1;
        }
        else if (key > arr[mid])
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = beg + (end - beg) / 2;
    }
    return ans;
}
int main()
{
    int even[4] = {0,0,0,0};

    cout << "First occurence of item is at index: " << firstOccurence(even, 4, 0) << endl;
    cout << "Last occurence of item is at index: " << lastOccurence(even, 4, 0) << endl;
    return 0;
}
