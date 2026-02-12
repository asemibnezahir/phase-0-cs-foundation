#include<bits/stdc++.h>
using namespace std;
int main()
{
    int in;
    cin>>in;
    string as;
    cin>>as;
    int for_a=0,for_d=0;
    for(auto st=as.begin();st<as.end();st++)
    {
        if(*st=='A')
        {
            for_a++;
        }
        else if(*st=='D')
        {
            for_d++;
        }
    }
    if(for_a>for_d)
    {
        cout<<"Anton";
    }
    else if(for_a<for_d)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
    return 0;
}