#include<iostream>
using namespace std;

//decimal to binary converting function
void binaryconvertion(int n){
    int x,m,i=1,sum=0,val=0;
    while(n>0){
        x=n%2;
        n/=2;
        sum+=(x*i);
        i*=10;
    }
    cout<<sum;
}


int main(){
    int n;
    cout<<"give number:";
    cin>>n;
    binaryconvertion(n);
}