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
    for(int i=0,j=in-1;i<j;i++,j--)
    {
        swap(arr[i],arr[j]);
    }
    for(int i=0;i<in;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}