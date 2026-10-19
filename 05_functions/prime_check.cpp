#include <iostream>
using namespace std;
bool isprime(int n){
    bool isprime=true;
    if(n<=1){
        isprime=false;
        return isprime;
    }
    for(int i=2;i<=(n/2);i++){
        if(n%i==0){
            isprime=false;
            return isprime;
        }
    }
    return isprime;
}

int main(){
    int n;
    cout<<"give number to check prime or not:";
    cin>>n;
    cout<<isprime(n);
}
