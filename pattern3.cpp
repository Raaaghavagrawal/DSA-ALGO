/*   321
     321
     321
*/

//PATTERN 3
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}