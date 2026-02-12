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
    int flag=0;
    for(int i=0,j=in-1;i<j;i++,j--)
    {
        if(arr[i]!=arr[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}