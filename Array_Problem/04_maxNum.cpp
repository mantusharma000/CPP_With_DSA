//write a pragram to find Max Number in a given array

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value : ";
    cin>>n;

    cout<<"Enter the Array Element : ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int maxNum;
    maxNum=arr[0];

    cout<<"Array Values is : ";
    for(int j=0; j<n; j++){
        // cout<<arr[n-i-1] <<" ";
        cout<<arr[j] <<" ";
    }
    cout<<endl;

    for(int k=0; k<n; k++){
        if(arr[k]>maxNum){
            maxNum=arr[k];
        }
    }

    cout<<"The MaxMum Array Value is : " <<maxNum <<endl;

    return 0;
}
