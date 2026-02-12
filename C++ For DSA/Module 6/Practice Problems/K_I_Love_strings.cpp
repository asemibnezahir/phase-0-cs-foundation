#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;\
    cin.ignore();
    for(int t=1;t<=tc;t++)
    {
        string a;
        getline(cin,a);
        stringstream s(a);
        string in1,in2;
        s>>in1;s>>in2;
        int sm_size=min(in1.size(),in2.size());
        for(int i=0;i<sm_size;i++)
        {
            cout<<in1[i]<<in2[i];
        }
        if(sm_size==in1.size()&&in1.size()!=in2.size())
        {
            for(int i=in1.size();i<in2.size();i++)
            {
                cout<<in2[i];
            }
        }
        else if(sm_size==in2.size()&&in1.size()!=in2.size())
        {
            for(int i=in2.size();i<in1.size();i++)
            {
                cout<<in1[i];
            }
        }
        cout<<endl;
    }

    return 0;
}