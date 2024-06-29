#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int originalnum = n;

    int sum = 0;
    while (n>0)
    {
        int lastdigits = n%10;
        sum +=lastdigits*lastdigits*lastdigits;
        n = n/10;
    }
    if (sum == originalnum)
    {
        cout<<"Armstrong number";
    }
    else{
        cout<< "Not an Armstrong Number";
    }
    return 0;
}
