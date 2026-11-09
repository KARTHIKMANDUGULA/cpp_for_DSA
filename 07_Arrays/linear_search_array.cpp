#include<iostream>
using namespace std;
int findtarget(int arr[],int sz,int target){
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}


int main(){
    int arr[]={10,25,40,55,70};
    int sz=5;
    int target=40;
    cout<<findtarget(arr,sz,target);
}