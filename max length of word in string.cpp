#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int curLen = 0, maxlen = 0;
    while (true)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (curLen > maxlen)
            {
                maxlen = curLen;
            }
            curLen = 0;
        }
        else
        {
            curLen++;
        }
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << maxlen << endl;

    return 0;
}