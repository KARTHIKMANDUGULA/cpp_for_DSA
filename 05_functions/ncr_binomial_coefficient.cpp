#include <iostream>
using namespace std;
int factorial(int a){                                             //factorial function
    int af=1;
    for(a;a>0;a--){
        af*=a;
    }
    return af;
}


int ncr(int n,int r){
    int ncrv=(factorial(n)/(factorial(r)*factorial(n-r)));       //ncr function
    return ncrv;
}


int main(){
    int n,r;
    cout<<"enter n value:";
    cin>>n;                                                       //process
    cout<<"enter r value:";
    cin>>r;
    cout<<"factorial of n="<<n<< " and r="<<r<<" is "<<ncr(n,r);
}