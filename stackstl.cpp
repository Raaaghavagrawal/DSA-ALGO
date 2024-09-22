#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<string>s;

    s.push("Raghav");
    s.push("Agrawal");
    s.push("Programmer");

    cout<<"Top element --> "<<s.top();
    // s.pop();
    cout<<endl;
    // cout<<"After deleting the first element"<<endl;
    // cout<<"Top element --> "<<s.top();

    cout<<"Size of stack --> "<<s.size()<<endl;
    return 0;
}