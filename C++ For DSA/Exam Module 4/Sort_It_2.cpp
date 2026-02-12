#include<bits/stdc++.h>
using namespace std;
int* sort_it(int n)
{
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    return arr;
}
int main()
{
    int in;
    cin>>in;
    int*p=sort_it(in);
    for(int i=0;i<in;i++)
    {
        cout<<p[i]<<" ";
    }
    return 0;
}