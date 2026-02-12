#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        int in;
        cin>>in;
        int arr[in];
        for(int i=0;i<in;i++)
        {
            cin>>arr[i];
        }
        int mn=INT_MAX;
        for(int i=0;i<in-1;i++)
        {
            for(int j=i+1;j<in;j++)
            {
                int test=arr[i]+arr[j]+j-i;
                mn=min(mn,test);
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}