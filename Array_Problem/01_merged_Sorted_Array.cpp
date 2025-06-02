#include <iostream>
using namespace std;

int main (){

    int arr1[]={1,2,4,6,7,5,6,7,8};
    int arr2[]={33,44,55,67,77,88,95,99};

    int n=8;
    int m=7;

    int result[n+m];
    int i=0;
    int j=0;
    int k=0;

    while(i<n and j<m){
        if(arr1[i]<arr2[j]){
            result[k]=arr1[i];
            k++;
            i++;
        }
        else{
            result[k]=arr2[j];
            k++;
            j++;
        }
    }

    while(i<n){
        result[k]=arr1[i];
        k++;
        i++;
    }

    while (j<m)
    {
        result[k]=arr2[j];
        k++;
        j++;
    }

    for(int i=0; i<(n+m); i++){
        cout<<result[i] <<" " <<endl;
    }
    
}