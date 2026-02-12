#include<bits/stdc++.h>
using namespace std;
int main()
{
    string in;
    getline(cin,in);
    stringstream S(in);
    string word;
    S>>word;
    reverse(word.begin(),word.end());
    cout<<word;
    while(S>>word)
    {
        reverse(word.begin(),word.end());
        cout<<" "<<word;
    }  
    return 0;
}