/*   A B C
     B C D 
     C D E
*/

//PATTERN 9
#include <iostream>
using namespace std;
int main(){
    int n,ascii=65,value;
    char ch=ascii;
    cout<<"Enter number of rows"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        ascii = 65+i;
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
        ch=ascii;
    }
    return 0;
}