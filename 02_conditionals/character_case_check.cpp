#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"give a character:";
    cin>>ch;
    int ascii = ch;
    if(65<=ascii && ascii<=90){
        cout<<"it is a uppercase:";
    }else if(97<=ascii && ascii<=122){
        cout<<"it is a lowercase";
    }
    return 0;
}