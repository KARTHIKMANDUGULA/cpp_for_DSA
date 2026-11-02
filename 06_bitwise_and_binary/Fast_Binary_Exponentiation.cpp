#include <iostream>
using namespace std;

int expopower(int n,int x){
    int ans=1;
    while(n>0){
        if((n&1)==1){
            ans*=x;
        }
        x*=x;
        n=n>>1;
    }
    cout<<ans;
    return ans;
}
int main(){
    int n,x;
    cout<<"give exponent:";
    cin>>n;
    cout<<"give base:";
    cin>>x;
    expopower(n,x);
}