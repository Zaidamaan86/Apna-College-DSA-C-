#include<iostream>
using namespace std;

int main()
{
    int a=10,b=5;
    cout<<"a=10   b=5"<<endl;
    char op;
    cout<<"Enter the operator"<<endl;
    cin>>op;
    switch(op)
    {
        case '+' : cout<<"a+b = "<<a+b<<endl;
                    break;
        case '-' : cout<<"a-b = "<<a-b<<endl;
                    break;
        case '/' : cout<<"a/b = "<<a/b<<endl;
                    break;
        default: cout<<"Enter another operator"<<endl;
                break;
    }
}