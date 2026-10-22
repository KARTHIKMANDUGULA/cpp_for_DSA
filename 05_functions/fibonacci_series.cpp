#include <iostream>
using namespace std;

void printfibonacci(int n){
    int one=0;
    int two=1;
    if(n<3){
        if(n==1){
            cout<<"0";
        }else if(n==2){
            cout<<"0 1";
        }
    }else if(n>=3){
        cout<<"0 1 ";
        for(int i=3;i<=n;i++){
            int x= one +two;
            one=two;
            two=x;
            cout<<x<<" ";
        }
    }
}


int main(){
    int n;
    cout<<"give a number to print all the fibonacci numbers:";
    cin>>n;
    printfibonacci(n);
}