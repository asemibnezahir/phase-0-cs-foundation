#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char comp;
    cin>>a>>comp>>b;
    if(comp=='<'&&a<b)
    {
        cout<<"Right";
    }
    else if(comp=='>'&&a>b)
    {
        cout<<"Right";
    }
    else if(comp=='='&&a==b)
    {
        cout<<"Right";
    }
    else
    {
        cout<<"Wrong";
    }
    return 0;
}