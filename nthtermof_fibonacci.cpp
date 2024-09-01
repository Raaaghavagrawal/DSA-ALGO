#include <iostream>
using namespace std;
int fibo(int n){
    int a=0,b=1,c;
    for(int i=2;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main(){
    int n;
    cout<<"Enter the term"<<endl;
    cin>>n;

    int ans=fibo(n);
    cout<<ans;
    return 0;

}