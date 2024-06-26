#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;

    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
    cout<<endl;
    cout<<"select the operation you want to do"<<endl;

    cout<<"PRESS + for addition"<<endl;
    cout<<"PRESS - for addition"<<endl;
    cout<<"PRESS * for addition"<<endl;
    cout<<"PRESS / for addition"<<endl;
    cout<<endl;

    char c;

    cin>>c;
    cout<<endl;

    if(c == '+')
    cout<<a+b;

    else if(c == '-')
    cout<<a-b;

    else if(c == '*')
    cout<<a*b;

    else if(c == '/')
    cout<<a/b;

    return 0;
}