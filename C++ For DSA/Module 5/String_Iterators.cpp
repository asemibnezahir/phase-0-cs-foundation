#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Iterator ইউজ হয় স্ট্রিং বা কোনো লিস্টের শুরু থেকে শেষ পর্যন্ত যেকোনো রেঞ্জে
    // প্রত্যেকটা ক্যারেক্টার নিয়ে সিরিয়ালি একসাথে বা আলাদা আলাদা কাজ করতে।
    string s="Hello";
    //Manually, here i is the iterator
    /* 
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<endl;
    } 
    */

    //Iterator Functions
    cout<<*s.begin()<<endl; //begin() works like a pointer, points first character of string
    //s.end() //end() works like a pointer, points last null character of string
    cout<<*(s.end()-1)<<endl; //pointer that points last character of a string
    cout<<endl;
    for(string :: iterator it=s.begin();it<s.end();it++)
    {
        cout<<*it<<endl;
    }
    cout<<endl;

    //for advance c++
    for(auto it=s.begin();it<s.end();it++)
    {
        cout<<*it<<endl;
    }

    return 0;
}