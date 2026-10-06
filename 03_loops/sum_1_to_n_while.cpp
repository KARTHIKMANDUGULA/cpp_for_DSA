#include<iostream>
using namespace std;
int main(){
    cout<<"enter number:";
    int n,i=1,sum=0;
    cin>>n;
    while(i<=n){
        sum +=i;
        i++;
    }
    cout<<"sum is:"<<sum;
    return 0;
}