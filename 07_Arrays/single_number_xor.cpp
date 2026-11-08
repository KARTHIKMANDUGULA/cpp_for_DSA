#include<iostream>
using namespace std;


void finduniquenumber(int arr[],int sz){
    int ans=0;
    for(int i=0;i<sz;i++){
        ans^=arr[i];
    }
    cout<<"unique number is:"<<ans;
}

int main(){
    int arr[]={7,3,5,4,5,3,4};
    int sz=(sizeof(arr)/4);
    finduniquenumber(arr,sz);
}