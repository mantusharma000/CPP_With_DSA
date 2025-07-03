// Whrite a program  arr[] = [2, 4, 1, 3, 5] to print inversin count The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the Element of Array : " <<endl;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"This is Array Element : ";
    for(int j=0; j<n; j++){
        cout<<arr[j] <<" ";
    }
    cout<<endl;

    int count=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                cout<<arr[i] << " > " <<arr[j] <<endl;
                count++;
            }
        }
    }

    cout<<"Inversion Array Element : " <<count <<endl;

    int count2=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]<arr[j]){
                cout<<arr[i] << " < " <<arr[j] <<endl;
                count2++;
            }
        }
    }

    cout<<"Inversion Element : " <<count2 <<endl;

    return 0;
}