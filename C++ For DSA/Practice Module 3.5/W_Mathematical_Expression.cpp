#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char chin,eq;
    cin>>a>>chin>>b>>eq>>c;
    if(chin=='+'&&c==a+b)
    {
        cout<<"Yes";
    }
    else if(chin=='-'&&c==a-b)
    {
        cout<<"Yes";
    }
    else if(chin=='*'&&c==a*b)
    {
        cout<<"Yes";
    }
    else if(chin=='+')
    {
        cout<<a+b;
    }
    else if(chin=='-')
    {
        cout<<a-b;
    }
    else if(chin=='*')
    {
        cout<<a*b;
    }
    return 0;
}