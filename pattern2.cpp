/*    1234
      1234
      1234
      1234
*/

//PATTERN 2
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}