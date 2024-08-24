/*   A A A
     B B B
     C C C
*/

//PATTERN 7
#include <iostream>
using namespace std;
int main(){
    int n,ascii=65;
    char ch;
    cout<<"Enter number of rows"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        ch = ascii;
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
        }
        ascii++;
        cout<<endl;
    }
    return 0;
}