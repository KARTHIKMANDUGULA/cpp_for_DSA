#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"give number:";
    cin>>n;
    int count=0;
    while(n>0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<"the count of set bit is:"<<count;
}