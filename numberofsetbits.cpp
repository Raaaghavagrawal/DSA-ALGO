#include <iostream>
using namespace std;
int setBits(int b){
    int count=0;
    while(b!=0){
        if(b&1){
            count++;
        }
        b=b>>1;
    }
    return count;
}
int setbits(int a){
    int count=0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a=a>>1;
    }
    return count;
}
int main(){
    int a,b;
    cin>>a>>b;

    int ans1=setbits(a);
    int ans2=setBits(b);
    int ans=ans1+ans2;
    cout<<ans;
    return 0;
}