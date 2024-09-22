#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<string>q;

    q.push("Raghav");
    q.push("Agrawal");
    q.push("Programmer");
    
    cout<<"First element --> "<<q.front()<<endl;
    // q.pop();
    // cout<<"First element --> "<<q.front()<<endl;

    cout<<"Size "<<q.size()<<endl;
}