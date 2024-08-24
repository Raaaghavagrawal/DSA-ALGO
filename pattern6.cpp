/*   1
     2 1 
     3 2 1
     4 3 2 1
*/

//PATTERN 6

#include <iostream>
using namespace std;
int main(){
    int n,c;
    cout<<"Enter number of rows"<<endl;
    cin>>n;

    for (int i=1;i<=n;i++){
        c=i;
        for(int j=i;j>=1;j--){
            cout<<c<<" ";
            c--;
        }
        cout<<endl;
    }
    return 0;
}