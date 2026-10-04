#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter your marks:";
    cin>>m;
    if(m>=90){
        cout<<"A_grade"<<endl;
    }else if(80<=m && m<90){
        cout<<"B_grade"<<endl;
    }else if(70<=m && m<80){
        cout<<"C_grade\n";
    }else{
        cout<<"D_grade\n";
    }
    return 0;
}