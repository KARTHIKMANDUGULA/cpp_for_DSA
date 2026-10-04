#include <iostream>
using namespace std;
int main()
{
    int a =2;
    int b = a++;
    int c= ++a;
    //int d=a-;
    int e=a--;
    //int f=a+;
    int g=+a;
    cout<<b<<endl<<c<<endl<<e<<endl<<g;
    return 0;
}