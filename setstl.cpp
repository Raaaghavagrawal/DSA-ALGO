#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> s;

    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(0);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(9);

    for(int i:s){
        cout<<i<<endl;
    }
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for(int i:s){
        cout<<i<<endl;
    }
    cout<<endl;

    cout<<"7 is present or not --> "<<s.count(7)<<endl;
    return 0;
}