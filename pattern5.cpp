/*   1
     2 3
     4 5 6
     7 8 9 10
*/

//PATTERN 5
#include <iostream>
using namespace std;
int main(){
    int n,c=1;
    cout<<"enter number of rows"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
    return 0;
}