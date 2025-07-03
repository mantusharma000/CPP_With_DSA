// write a program to sum Array Element in a Given Array

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Value Array Size : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the Array Element : " <<endl;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"This a Original Array : ";
    for(int j=0; j<n; j++){
        cout<<arr[j] <<" ";
    }
    cout<<"\n";

    int sumof_arr=0;

    for(int k=0; k<n; k++){
        sumof_arr+=arr[k];
    }
    cout<<"The Total Sum of Element : " <<sumof_arr <<endl;

    return 0;
}