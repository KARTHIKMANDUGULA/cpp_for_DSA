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

void printprimes(int n){
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
}


int main(){
    int n;
    cout<<"give a number to print all the prime numbers:";
    cin>>n;
    printprimes(n);
}