#include<iostream>
#include<climits>
using namespace std;

void findminmax(int arr[],int sz){
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int min_ind;
    int max_ind;
    for (int i=0;i<sz;i++){
        if(arr[i]<smallest){
            min_ind=i;
        }
        if(arr[i]>largest){
            max_ind=i;
        }
        smallest=min(arr[i],smallest);
        largest = max(arr[i],largest);
    }
    cout<<"smallest:"<<smallest<<endl<<"largest:"<<largest<<endl;
    cout<<"smallest num index is:"<<min_ind<<endl;
    cout<<"largest num index is:"<<max_ind;
}
int main(){
    int arr[6]={5,120,-38,8,25,1};
    int sz=6;
    findminmax(arr,sz);
}