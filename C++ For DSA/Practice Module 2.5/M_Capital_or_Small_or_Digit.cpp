#include<bits/stdc++.h>
using namespace std;
int main()
{
    char in;
    cin >> in;
    if(in>='0'&&in<='9')
    {
        cout<<"IS DIGIT";
    }
    else
    {
        cout<<"ALPHA"<<endl;
        if(in>='A'&&in<='Z')
        {
            cout<<"IS CAPITAL";
        }
        else if(in>='a'&&in<='z')
        {
            cout<<"IS SMALL";
        }
    }
    return 0;
}