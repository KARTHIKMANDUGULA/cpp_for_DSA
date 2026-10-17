#include <iostream>
using namespace std;
int main(){
    int n=6;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){            //1st part
            cout<<'*'<<" ";
        }

        for(int j=2*(n-i)-2;j>0;j--){      //2nd part
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++){            //3rd part
            cout<<'*'<<" "; 
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){            //4th part
            cout<<'*'<<" ";
        }
        for(int j=0;j<(2*i);j++){          //5th part
            cout<<"  ";
        }
        for(int j=0;j<n-i;j++){            //6th part
            cout<<'*'<<" ";
        }
        cout<<endl;
    }
}