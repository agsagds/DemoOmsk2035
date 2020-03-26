#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello world!";
    char c;
    int a, b;
    cin>>a>>c>>b;
    if(c=='+')
        cout<<a+b;
    else if(c=='*')
        cout<<a*b;
}