/*   A B C
     A B C 
     A B C
*/

//PATTERN 8
#include <iostream>
using namespace std;
int main(){
    int n,ascii=65;
    char ch=ascii;
    cout<<"Enter number of rows"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        ascii=65;
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
        ch=ascii;
    }
    return 0;
}