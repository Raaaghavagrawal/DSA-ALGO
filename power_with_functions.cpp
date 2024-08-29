#include <iostream>
using namespace std;
int power(int a,int b){
    int ans=1;

    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    cout<<ans;
    return ans;
}
int main(){


    int a,b;
    cout<<"Enter two values"<<endl;
    cin>>a>>b;
    power(a,b);

    cout<<endl;

    // int c,d;
    // cout<<"enter another two values"<<endl;
    // cin>>c>>d;
    // power(c,d);


    return 0;
}