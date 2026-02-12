#include<bits/stdc++.h>
using namespace std;
int main()
{
    char in[100001];
    while(cin.getline(in,100001))
    {
        int len=strlen(in);
        sort(in,in+len);
        for(int i=0;i<len;i++)
        {
            if(in[i]==' ')
            {
                continue;
            }
            cout<<in[i];
        }
        cout<<endl;
    }
    return 0;
}