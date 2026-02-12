#include<bits/stdc++.h>
using namespace std;
int main()
{
    int in;
    cin>>in;
    int arr[in];
    for(int i=0;i<in;i++)
    {
        cin>>arr[i];
    }
    int mn=INT_MAX,mx=INT_MIN;
    for(int i=0;i<in;i++)
    {
        mn=min(mn,arr[i]);
        mx=max(mx,arr[i]);
    }
    for(int i=0;i<in-1;i++)
    {
        for(int j=i+1;j<in;j++)
        {
            if(arr[i]==mn&&arr[j]==mx)
            {
                swap(arr[i],arr[j]);
            }
            else if(arr[i]==mx&&arr[j]==mn)
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    
    for(int i=0;i<in;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}