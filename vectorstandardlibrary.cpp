#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    // CAPACITY = 0
    cout << "CAPACITY :" << v.capacity() << endl;

    v.push_back(4);
    cout << "CAPACITY :" << v.capacity() << endl; // CAPACITY = 1

    v.push_back(8);
    cout << "CAPACITY :" << v.capacity() << endl; // CAPACITY = 2

    v.push_back(11);
    cout << "CAPACITY :" << v.capacity() << endl; // CAPACITY = 4

    v.push_back(1);
    cout << "CAPACITY :" << v.capacity() << endl; // CAPACITY = 4

    v.push_back(6);
    cout << "CAPACITY :" << v.capacity() << endl; // CAPACITY = 8
    cout << "SIZE :" << v.size() << endl;         // SIZE = 5
    
    cout<<"FIRST ELEMENT: "<<v.front()<<endl;
    cout<<"LAST ELEMENT: "<<v.back()<<endl;

    cout<<"before deleting element"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    
    v.pop_back();
    cout<<"After deleting the element"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Now the last element will be : "<<v.back()<<endl;
    return 0;
}