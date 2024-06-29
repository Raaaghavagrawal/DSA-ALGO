#include <iostream>
using namespace std;
int main(){
    float num1,num2;
    cout<<"Input two numbers"<<endl;
    cin>>num1>>num2;

    char op;
    cout<<"Enter the operator(+,-,*,/): ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<num1+num2;
        break;
    case '-':
        cout<<num1-num2;
        break;
    case '*':
        cout<<num1*num2;
        break;
    case '/':
        cout<<num1/num2;
        break;
    
    default:
        break;
    }
    return 0; 
}
