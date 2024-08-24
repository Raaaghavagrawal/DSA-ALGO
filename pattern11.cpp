/*   D
     C D 
     B C D
     A B C D
*/

//PATTERN 10
#include <iostream>
using namespace std;
int main(){
    int n,ascii=68;
    char ch=ascii;
    cout<<"Enter number of rows"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        ascii=68-i;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
        ch=ascii;
    }
    return 0;
}