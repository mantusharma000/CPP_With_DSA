// write a program to find target values is a given array;

#include <iostream>
using namespace std;

int main(){

    int arr[]={1,5,7,3,4,6,4,3,2};
    
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    
    int target=7;
    int arr2=0;

    for(int i=0; i<arr_size; i++){
        // arr2+=arr[i];
        // if(arr2==target){
        //     cout<<arr[i] <<" : " <<arr2;
        // }
        for(int j=i+1; j<arr_size; j++){
            // arr2=arr[j]+arr[i];
            // cout<<arr2 <<" ";
            if(arr[i]+arr[j]==target){
                arr2++;
                cout<<"Value : " <<arr[i] <<" + " <<arr[j] <<endl;
            }
            // else{
            //     arr2+=arr[j];
            //     cout<<"Total Sum : " <<arr2 <<endl;
            // }
        }
        // cout<<endl;
    }
    cout<<"The Total Sum of Array Element : " <<arr2 <<endl;

    // if(target==arr2){
    //     cout<<arr2 <<" " <<endl;
    // }

    return 0;
}

