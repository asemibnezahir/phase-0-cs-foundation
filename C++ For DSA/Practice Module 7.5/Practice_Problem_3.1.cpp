#include <bits/stdc++.h>
using namespace std;
int main()
{
    string inp,as;
    getline(cin,inp);
    cin>>as;
    stringstream ss(inp);
    string word;
    int cnt=0;
    while(ss>>word)
    {
        if(word==as)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
