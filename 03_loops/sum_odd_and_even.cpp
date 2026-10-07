#include<iostream>
using namespace std;
int main(){
    cout<<"enter number:";
    int n,i_o=1,i_e=0,sum_o=0,sum_e=0;
    cin>>n;
    while(i_o<=n){
        sum_o +=i_o;
        i_o+=2;
    }
    while(i_e<=n){
    sum_e +=i_e;
    i_e+=2;
    }
    cout<<"sum of odd numbers is:"<<sum_o<<endl;
    cout<<"sum of even numbers is:"<<sum_e;

    return 0;
}