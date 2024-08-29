#include <iostream>
using namespace std;
int main(){
    int a,b,ans=1;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    cout<<ans<<endl;
    return 0;
}