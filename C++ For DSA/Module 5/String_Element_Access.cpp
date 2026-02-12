#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s; //to take input without space
    //s[i]--> to access i th index
    cout<<s[1]<<endl;
    //we also can access with buit-in function
    cout<<s.at(2)<<endl;   

    //to print the first character of string
    cout<<s.front();

    //to print the last character of string
    cout<<s.back()<<endl;
    return 0;
}