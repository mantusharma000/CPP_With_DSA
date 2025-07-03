// write a program to find Minimum Value in given a Array

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of Array Size : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the Array Element : " <<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        // cout<<arr[i] <<" ";
    }

    cout<<"Origenel Value of Array : ";
    for(int j=0; j<n; j++){
        cout<<arr[j] <<" ";
    }
    cout<<endl;

    int minValue;
    minValue=arr[0];

    for(int k=0; k<n; k++){
        if(arr[k]<minValue){
            minValue=arr[k];
        }
    }

    cout<<"Minimum Value of Array is : " <<minValue <<endl;

}