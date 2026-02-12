#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    
    //Normal Process of this task
    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i]<<endl;
    // }


    //Shortcut of same task
    for(char c:s)
    {
        cout<<c<<endl;
    }
    //in this method we don't need to access index
    return 0;
}