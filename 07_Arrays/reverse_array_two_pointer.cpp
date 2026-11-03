#include<iostream>
using namespace std;
void reverse_arr(int arr[],int sz){
    int st=0,end=sz-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int sz=5;
    reverse_arr(arr,sz);
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
}