 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        int in;
        string as;
        cin>>in>>as;
        int freq[26]={0};
        int ballon=0;
        for(int i=0;i<in;i++)
        {
            if(freq[as[i]-'A']==0)
            {
                ballon+=2;
                freq[as[i]-'A']=1;
            }
            else
            {
                ballon++;
            }
        }
        cout<<ballon<<endl;
    }
    return 0;
}