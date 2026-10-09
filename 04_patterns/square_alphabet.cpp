#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(char ch = 'A';ch<n+65;ch++){
            cout<< ch <<" ";
        }
        cout<<endl;
    }

}