#include<bits/stdc++.h>
using namespace std;
int main()
{
    string in;
    cin>>in;
    int cnt[26]={0};
    for(int i=0;i<in.size();i++)
    {
        if(in[i]>'A'&&in[i]<'Z')
        {
            cnt[in[i]-'A']++;
        }
        else if(in[i]>'a'&&in[i]<'z')
        {
            cnt[in[i]-'a']++;
        }
    }
    int ans=min({cnt[4],cnt[6],cnt[24],cnt[15],cnt[19]});
    cout<<ans;
    return 0;
}