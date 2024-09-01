#include <iostream>
using namespace std;
int getMax(int arr[],int n){
    int max= arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int getMin(int arr[],int n){
    int min= arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Maximum element of the array is "<<getMax(arr,size)<<endl;
    cout<<"Minimum element of the array is "<<getMin(arr,size)<<endl;

}