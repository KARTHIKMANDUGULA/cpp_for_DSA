#include <iostream>
using namespace std;

int sumofnumbers(int n){
    int i=0,sum=0;

    while (n>0){
        sum=n%10;
        n=n/10;
        i+=sum;
    }
    return i;

}

int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<sumofnumbers(n)<<endl;
}