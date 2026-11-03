#include<iostream>
#include<climits>
using namespace std;

void findminmax(int arr[],int sz){
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for (int i=0;i<sz;i++){
        smallest=min(arr[i],smallest);
        largest = max(arr[i],largest);
    }
    cout<<"smallest:"<<smallest<<endl<<"largest:"<<largest;
}
int main(){
    int arr[6]={5,120,-38,8,25,1};
    int sz=6;
    findminmax(arr,sz);
}