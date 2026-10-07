#include<iostream>
using namespace std;
int main(){
    cout<<"give number:";
    int n,sum=0;
    cin>>n;
    for(int i=0;i<=n;i++){
        sum +=i;
    }
    cout<<"sum is:"<<sum<<endl;
    return 0;
}