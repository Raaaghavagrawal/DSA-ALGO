#include <iostream>
using namespace std;
int ap(int n){
    int ap1=(3*n)+7;
    return ap1;
}
int main(){
    int m;
    cin>>m;

    int ans=ap(m);
    cout<<ans;
}