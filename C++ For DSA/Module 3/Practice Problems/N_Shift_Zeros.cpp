#include<bits/stdc++.h>
using namespace std;
int* shift_zero(int arr[],int in)
{
    for(int i=0;i<in-1;i++)
    {
        for(int j=i+1;j<in;j++)
        {
            if(arr[i]==0)
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    return arr;
}
int main()
{
    int in;
    cin>>in;
    int* arr=new int[in];
    for(int i=0;i<in;i++)
    {
        cin>>arr[i];
    }
    int *p=shift_zero(arr,in);
    for(int i=0;i<in;i++)
    {
        cout<<p[i]<<" ";
    }
    return 0;
}