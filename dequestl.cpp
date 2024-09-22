#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int>d;

    d.push_back(1);
    d.push_front(2);

    
    // d.pop_front();
    cout<<endl;

    cout<<"print first index element"<<" "<<d.at(1)<<endl;
    cout<<"Front "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;
    return 0;
}