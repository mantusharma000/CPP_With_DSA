// Write a Program to find Sum of Digit Number 
#include <iostream>
using namespace std;

int main(){
    int sum_digit;
    cout<<"Enter the Value of Sum_Digit Minimum two Digit : ";
    cin>>sum_digit;

    int sumof_digit=0;

    for(int i=0; sum_digit>0; i++){
        sumof_digit+=sum_digit%10;
        sum_digit/=10;
        cout<<sumof_digit <<endl;
    }
    cout<<"Total Sum of Digit : " <<sumof_digit <<endl;

    return 0;
}