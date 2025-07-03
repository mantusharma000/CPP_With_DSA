//write a program to print Avrage Sum of Array element in a given Array

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

    cout<<"This a Original Array : ";
    for(int j=0; j<n; j++){
        cout<<arr[j] <<" ";
    }
    cout<<endl;

    int arr_sum=0;
    for(int k=0; k<n; k++){
        arr_sum+=arr[k];
    }

    float arr_avgSum=(float) arr_sum/n;

    cout<<"Avrage Sum Of Array Element : " <<arr_avgSum <<endl;

    return 0;
}