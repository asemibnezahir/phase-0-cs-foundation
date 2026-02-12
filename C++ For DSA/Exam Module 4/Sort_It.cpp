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
    sort(arr,arr+in);
    for(int i=0;i<in;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+in,greater<int>());
    for(int i=0;i<in;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}