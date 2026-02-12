#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int t=0;t<tc;t++)
    {
        int in;
        cin>>in;
        int arr[in];
        for(int i=0;i<in;i++)
        {
            cin>>arr[i];
        }
        int c_ev=0,c_od=0;
        for(int i=0;i<in;i++)
        {
            arr[i]%2==0?c_ev++:c_od++;
        }
        if(c_ev==c_od)
        {
            cout<<0;
        }
        else
        {
            if(in%2!=0)
            {
                cout<<-1;
            }
            else
            {
                int ans=(abs(c_ev-c_od))/2;
                cout<<ans;
            }
        }
        cout<<endl;
    }
    return 0;
}