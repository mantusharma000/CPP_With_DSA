//write a pragaram to print sum of even number and sum of odd number using Vector

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of Vector: ";
    cin>>n;

    vector<int> vec(n);

    cout<<"Enter the Element of Vector : " <<endl;
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    cout<<"The Vector Value is : ";
    for(int j=0; j<n; j++){
        // cout<<vec[j]<<" ";
        vec.push_back(j);
        cout<<vec[j] <<" ";
    }
    cout<<endl;
    
    int oddSum=0;
    int evenSun=0;

    for(int k=0; k<n; k++){
        if(vec[k]%2==0){
            evenSun+=vec[k];
        }
        else{
            oddSum+=vec[k];
        }
    }
    cout<<endl;

    cout<<"The Even Sum of Vector Element : " <<evenSun <<endl;
    cout<<"The Odd Sum of Vector Element : " <<oddSum <<endl;

    int diff_sum;
    if(evenSun>oddSum){
        diff_sum=evenSun-oddSum;
        cout<<"The diffrent Even Sum of Vector Element : " <<diff_sum <<endl;
    }
    else{
        diff_sum = oddSum-evenSun;
        cout<<"The diffrent Sum of Odd Sum : " <<diff_sum <<endl;
    }

    diff_sum = evenSun-oddSum;
    cout<<"The Diffrent Sum of Vector Element : " <<diff_sum <<endl;

    return 0;

}