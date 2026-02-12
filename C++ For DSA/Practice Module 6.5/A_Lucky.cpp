#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        string in;
        cin>>in;
        int cn1=0,cn2=0;
        for(int i=0,j=3;i<3&&j<6;i++,j++)
        {
            cn1+=(in[i]-'0');
            cn2+=(in[j]-'0');
        }
        if(cn1==cn2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}