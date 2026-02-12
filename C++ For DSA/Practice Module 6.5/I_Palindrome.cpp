#include<bits/stdc++.h>
using namespace std;
int main()
{
    string in;
    cin>>in;
    int flag=1;
    for(int i=0,j=in.size()-1;i<j;i++,j--)
    {
        if(in[i]!=in[j])
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}