#include <iostream>
using namespace std;
int reversenumber(int n){
    int x;
    int val=0;
    while(n>0){
        x=n%10;
        n/=10;

        val=(val*10)+x;
    }
    return val;
}

bool ispalindrome(int n){
    bool ispalindrome=false;
    int k=reversenumber(n);
    if(n<0){
        ispalindrome=false;
    }else if(k==n){
        return true;
    }
    return ispalindrome;
}

int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    if(ispalindrome(n)){
        cout<<"it is a palindrome"<<endl;
    }else{
        cout<<"not a palindrome"<<endl;
    }
    int r=reversenumber(n);
    cout<<"reverse of number is:"<<r;
}
