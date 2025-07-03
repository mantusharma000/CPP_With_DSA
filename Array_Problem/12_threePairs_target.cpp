//write a program to find three pairs target value to take array from user

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;

    int target;
    cout<<"Enter the Target Value : ";
    cin>>target;
    cout<<"This is Target Value : " <<target <<endl;

    int arr1[n];
    int pairs=0;

    cout<<"Enter the Value of Array Element : " <<endl;
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    cout<<"This is a Array Element : ";
    for(int j=0; j<n; j++){
        cout<<arr1[j] <<" ";
    }
    cout<<endl;

    for(int k=0; k<n; k++){
        pairs+=arr1[k];
        if(pairs==target){
            cout<<"The Target Value is Matched Added Array Element is : " <<pairs <<endl;
        }
    }
    cout<<endl;

    int mat=0;
    for(int l=0; l<n; l++){
        for(int k=l+1; k<n; k++){
            if(arr1[l]+arr1[k]==target){
                cout<<"Values is " <<arr1[l] <<" + " <<arr1[k] <<endl;
                mat++;
            }
        }
    }
    cout<<"The Pair Value of Array Element : " <<mat <<endl;

    int three_pair=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr1[i]+arr1[j]+arr1[k]==target){
                    cout<<"Three Pair Element is : " <<arr1[i] <<" + " <<arr1[j] <<" + " <<arr1[k] <<endl;
                    three_pair++;
                }
            }
        }
    }

    cout<<"The Pair of Three Element is : " <<three_pair <<endl;

    return 0;

}