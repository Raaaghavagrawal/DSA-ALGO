#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> mp;

    mp[1] = "Raghav";
    mp[3] = "Agrawal";
    mp[13] = "Hello";

    mp.insert({5, "Coder"});

    cout << "Before erase" << endl;
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    cout << "Finding 13 --> " << mp.count(13) << endl;

    cout << "After erase" << endl;
    mp.erase(5);

    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}