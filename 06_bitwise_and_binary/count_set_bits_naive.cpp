#include<iostream>
using namespace std;

//decimal to binary converting function
int binaryconvertion(int n){
    int x,m,i=1,sum=0,val=0;
    while(n>0){
        x=n%2;
        n/=2;
        sum+=(x*i);
        i*=10;
    }
    cout<<"binary converstion is:"<<sum<<endl;
    return sum;
}


int countsetbits(int n){
    int i=0;
    int sum=binaryconvertion(n);
    while(sum>0){
        sum%10;
        if(sum%10==1){
            i++;
        }
        sum/=10;
        
    }
    cout<<"count of set bits is:"<<i;
}


int main(){
    int n;
    cout<<"give number:";
    cin>>n;
    countsetbits(n);
}