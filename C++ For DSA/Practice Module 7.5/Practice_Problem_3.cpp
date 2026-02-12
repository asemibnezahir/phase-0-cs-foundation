#include<bits/stdc++.h>
using namespace std;
int main()
{
    string inp,as;
    getline(cin,inp);
    cin>>as;
    int cnt=0;
    int tar=inp.find(as);
    while(tar!=-1)
    {
        cnt++;
        tar=inp.find(as,tar+1);
    }
    cout<<cnt;
    return 0;
}