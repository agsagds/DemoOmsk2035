#include<iostream>
using namespace std;
int main()
{
    cout<<"Please, input ur data here: ";
    char c;
    int a, b;
    cin>>a>>c>>b;
    switch(c)
    {
     case '+':
        cout<<a+b;
        break;
     case '-':
        cout<<a-b;
        break;
     case '/':
        cout<<a/b;
        break;
     case '*':
        cout<<a*b;
        break;
     default:
        cout<<"Undefinite operation!"<<endl;
        break;
    }
}