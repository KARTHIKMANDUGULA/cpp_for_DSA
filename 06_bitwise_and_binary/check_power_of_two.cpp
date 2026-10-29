#include <iostream>
using namespace std;

bool ispowerof2(int n){
    bool ispowerof2=(n>0) && ((n & (n-1))==0);
    cout<<ispowerof2;
    return (ispowerof2);
}

int main(){
    int n;
    cout<<"give number:";
    cin>>n;
    ispowerof2(n);
}