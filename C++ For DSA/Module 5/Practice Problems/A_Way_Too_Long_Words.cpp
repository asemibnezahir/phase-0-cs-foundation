#include<bits/stdc++.h>
using namespace std;
int main()
{
    int in;
    cin>>in;
    for(int i=1;i<=in;i++)
    {
        string inp;
        cin>>inp;
        if(inp.size()<=10)
        {
            cout<<inp;
        }
        else
        {
            cout<<*inp.begin()<<inp.size()-2<<*(inp.end()-1);
        }

        cout<<endl;
    }
    return 0;
}