#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    int digit;
    int d=0;
    int i;
    while(n!=0){
        digit = n%10;
        d=digit*pow(2,i)+d;
        n=n/10;
        i++;    
    }
    cout<<d;
    return 0;
}