//write a program to find Array is sorted or Not Sorted to take user input

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the Array Element : " <<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"This is Array Element : ";
    for(int j=0; j<n; j++){
        cout<<arr[j] <<" ";
    }
    cout<<"\n";

    bool arr_sorted=true;

    for(int k=0; k<n; k++){
        if(arr[k]>arr[k-1]){
            arr_sorted=false;
            cout<<"Array is Not Sorted : " <<arr_sorted;
            break;
        }
        else{
            cout<<"Array is Sorted : " <<arr_sorted;
            break;
        }
    }
    cout<<endl;

    return 0;
}