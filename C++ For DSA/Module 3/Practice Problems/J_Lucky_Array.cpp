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
    int mn=INT_MAX;
    for(int i=0;i<in;i++)
    {
        mn=min(mn,arr[i]);
    }
    int cnt=0;
    for(int i=0;i<in;i++)
    {
        if(arr[i]==mn)
        {
            cnt++;
        }
    }
    if(cnt%2==0)
    {
        cout<<"Unlucky";
    }
    else
    {
        cout<<"Lucky";
    }
    return 0;
}