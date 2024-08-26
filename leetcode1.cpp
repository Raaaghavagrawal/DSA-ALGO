
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    int r,sum=0,mul=1,sub;
    while(n!=0){
        r=n%10;
        sum+=r;
        mul*=r;
        n=n/10;
    }
    sub=mul-sum;
    cout<<sub;
}