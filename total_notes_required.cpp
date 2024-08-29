#include <iostream>
using namespace std;
int main(){
    int amo;
    cout<<"Enter amount"<<endl;
    cin>>amo;

    int rs100,rs50,rs20,rs1;

    switch(1){
        case 1:
        rs100=amo/100;
        amo=amo%100;
        cout<<"Total number of 100 ruppes notes required are "<<rs100<<endl;
        

        case 2:
        rs50=amo/50;
        amo=amo%50;
        cout<<"Total number of 50 ruppes notes required are "<<rs50<<endl;
        

        case 3:
        rs20=amo/20;
        amo=amo%20;
        cout<<"Total number of 20 ruppes notes required are "<<rs20<<endl;
        

        case 4:
        rs1=amo/1;
        amo=amo%1;
        cout<<"Total number of 1 ruppes notes required are "<<rs1<<endl;
        

        default:
        break;
    }
    return 0;
}