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
    int mac=INT_MIN;
    for(int i=0;i<in;i++)
    {
        mac=max(arr[i],mac);
    }
    cout<<mac;
    return 0;
}