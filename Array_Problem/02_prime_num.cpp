#include <iostream>
using namespace std;

bool prime_Num(int n){
    if(n<=1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int main (){
    int n;
    cout<<"Enter the Limit of Excute Prime Number : ";
    cin>>n;
    cout<<n <<" Are : \n";

    for(int i=2; i<=n; i++){
        if(prime_Num(i)){
            cout<<i <<" ";
        }
    }
}



#include <iostream>
using namespace std;

int main (){
    int n; 
    cout<<"Enter the Value of N to Find The Prime Number : ";
    cin>>n;

    for(int i=2; i<=n; i++){
        int prime_num=1;

        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                prime_num=0;
                break;
            }
        }
        if(prime_num==1){
            cout<<i <<" ";
        }
    }
    cout<<endl;
}