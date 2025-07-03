//write a program to reverse digits of a number
#include <iostream>
using namespace std;
int main(){
    int re_digit;
    cout<<"Enter the Value of Reverse Digit Minimum to Digit : ";
    cin>>re_digit;
    // cout<<re_digit;
    int revof_digit=0;
    
    cout<<"Reverse Of Digit : ";
    for(int i=1; re_digit>0; i++){
        revof_digit=re_digit%10;
        cout<<revof_digit;
        re_digit/=10;
    }
    // cout<<"Reverse Of Digit : " <<revof_digit;
}