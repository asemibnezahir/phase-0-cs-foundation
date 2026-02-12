#include<bits/stdc++.h>
using namespace std;
int* fun()
{
    int* Arr=new int[5];
    for(int i=0;i<5;i++)
    {
        cin >>Arr[i];
    }
    return Arr;
}
int main()
{
    int*P= fun();
    for(int i=0;i<5;i++)
    {
        cout<<P[i]<<" ";
    }
    return 0;
}