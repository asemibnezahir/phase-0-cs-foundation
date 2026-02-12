#include<bits/stdc++.h>
using namespace std;
int main()
{
    string in;
    cin>>in;
   
    //Manually
    // for(int i=0;i<in.size();i++)
    // {
    //     if(in[i]=='E'&&in[i+1]=='G'&&in[i+2]=='Y'&&in[i+3]=='P'&&in[i+4]=='T')
    //     {
    //         in.replace(i,5," ");
    //     }
    // }


    //find & replace
    string finding="EGYPT";
    for(int i=0;i<in.size();i++)
    {
        int ind=in.find(finding);
        if(i==ind)
        {
            in.replace(i,5," ");
        }
    }
    cout<<in;
    return 0;
}

