#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int t=0;t<tc;t++)
    {
        string a,b;
        cin>>a>>b;
        int fin=a.find(b);
        while(fin!=-1)
        {
            a.replace(fin,b.size(),"#");
            fin=a.find(b,fin+1);
        }
        cout<<a<<endl;
    }
    return 0;
}