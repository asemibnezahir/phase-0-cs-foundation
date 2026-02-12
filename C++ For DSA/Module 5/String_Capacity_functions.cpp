#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello hi";
    //for the length of string
    cout<<s.size()<<endl;
    cout<<s.length()<<endl;
    //2 function same work

    //For max size of string
    cout<<s.max_size();

    //For currently available
    cout<<s.capacity()<<endl;

    //To clear a string
    s.clear();
    cout<<s;

    //To check string is empty or not
    if(s.empty()==true)
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        cout<<"Not Empty"<<endl;
    }
    s="Hello hi";
    
    //To decrease the string size
    s.resize(5);
    cout<<s<<endl;
    //To increase the string size
    s.resize(18,'a');
    cout<<s<<endl;
    
    return 0;
}