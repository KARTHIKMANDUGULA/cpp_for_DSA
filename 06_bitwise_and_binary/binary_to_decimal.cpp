#include <iostream>
using namespace std;
void binarytodecimal(int n){
    int x,val=0,i=1;
    while(n>0){
        x=n%10;
        n/=10;
        val=(x*i)+val;
        i*=2;
    }
    cout<<val;
}

int main(){
    int n;
    cout<<"give number:";
    cin>>n;
    binarytodecimal(n);
}