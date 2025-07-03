//write a program to find uniqe number in a given a array
//EX- [2, 3, 1, 3, 2, 4, 1]

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,4,6,2,1,4,6,7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<arr_size; i++){
        for(int j=i+1; j<arr_size; j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }

    int uniqe=0;
    for(int k=0; k<arr_size; k++){
        if(arr[k]>0){
            uniqe=arr[k];
        }
    }
    cout<<"This is a Uniqe Number of Array : " <<uniqe <<endl;

    return 0;
}