#include<bits/stdc++.h>
using namespace std;
int main()
{
    int in;
    cin>>in;
    int*a=new int[in];
    for(int i=0;i<in;i++)
    {
        cin>>a[i];
    }
    int in2;
    cin>>in2;
    int*b=new int[in2];
    for(int i=0;i<in;i++)
    {
        b[i]=a[i];
    }
    delete[] a;
    for(int i=in;i<in2;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<in2;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}