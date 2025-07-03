//write a program to print Even Number is Subtract and Odd is Addition

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the Minimum Two Digit Number : ";
    cin>>num;
    // int even_subtract=0;
    // int odd_sum=0;
    int result = 0;

    for(int i=1; i<=num; i++){
        if(num%2==0){
            // even_subtract-=num%10;
            // even_subtract/=10;
            result-=i;
            cout<<" Even Sum = " <<result <<" Or : " <<i <<endl;
        }
        else{
            // odd_sum+=num%10;
            // odd_sum/=10;
            // cout<<odd_sum <<endl;
            result+=i;
            cout<<"Odd Sum = " <<result <<" OR :" <<i <<endl;

        }
    }
    // cout<<even_subtract <<endl;
    cout<<"Result of Enven and Odd : = " <<result <<endl;
}