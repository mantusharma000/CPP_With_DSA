//write a program to find the sum of array odd element and even element and also find diffent value to take a user Array
#include <iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the Array Element : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"This is a Original Array Value : ";
    for(int j=0; j<n; j++){
        cout<<arr[j] <<" ";
    }
    cout<<"\n";

    int oddSum = 0;
    int evenSum = 0;

    for(int k=0; k<n; k++){
        if(arr[k]%2==0){
            evenSum+=arr[k];
        }
        else{
            oddSum+=arr[k];
        }
    }

    cout<<"Even Sum of Element : " <<evenSum <<endl;
    cout<<"Odd Sum of Element : " <<oddSum <<endl;
    int sumDeffrent=evenSum-oddSum;
    cout<<"The Diffrent of EvenSum - OddSum : " <<sumDeffrent <<endl;

    return 0;
}