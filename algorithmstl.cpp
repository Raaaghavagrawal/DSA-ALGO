#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int>v;

    v.push_back(1);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);

    cout<<binary_search(v.begin(),v.end(),4)<<endl;

    cout<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    cout<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a=5;
    int b=10;

    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

    swap(a,b);
    cout<<a<<endl;

    string str="raghav";
    reverse(str.begin(),str.end());
    cout<<"reverse String is --> "<<str<<endl;
    return 0;
}