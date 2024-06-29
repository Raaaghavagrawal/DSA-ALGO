#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int x;
    cout<<"Enter element to search\n";
    cin>>x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j]==x){
                cout<<"Element found at "<<i<<"th row"<<" and "<<j<<"th column "<<endl;
                flag=true;
            }
        }
        
    }
    if(flag == false){
        cout<<"Element not found\n";
    }
    
    return 0;
}