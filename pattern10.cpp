/*   A
     B B 
     C C C
*/

//PATTERN 10
#include <iostream>
using namespace std;
int main(){
    int n,ascii=65;
    char ch=ascii;
    cout<<"Enter number of rows"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        ascii=65+i;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch=ascii;
    }
    return 0;
}