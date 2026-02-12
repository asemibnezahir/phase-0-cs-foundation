#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        int in,sum;
        cin>>in>>sum;
        int arr[in];
        for(int i=0;i<in;i++)
        {
            cin>>arr[i];
        }
        int flag=0;
        for(int i=0;i<in-2;i++)
        {
            for(int j=i+1;j<in-1;j++)
            {
                for(int k=j+1;k<in;k++)
                {
                    if(arr[i]+arr[j]+arr[k]==sum)
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1)
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