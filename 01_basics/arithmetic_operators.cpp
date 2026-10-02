#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"give a value:";
    cin>>a;
    cout<<"give b value:";
    cin>>b;
    cout<<"sum="<<(a+b) <<endl<<"difference="<<(a-b) <<endl<<"product="<<(a*b) <<endl<<"division="<<((float)a/b) <<endl<<"mod="<<(a%b);
    return 0;
}