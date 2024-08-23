#include <iostream>
using namespace std;
int main(){
  int a,i=1,even_sum=0;
  cout<<"Enter value upto which sum is required"<<endl;
  cin>>a;

  while (i<=a)
  {
      if(i%2==0){
          even_sum+=i;
      }
      i++;
  }
  cout<<even_sum<<endl;
  return 0;
}
