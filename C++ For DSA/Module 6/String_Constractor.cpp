#include<bits/stdc++.h>
using namespace std;
int main()
{
    //normal string class & object s
    //string s="Hello";



    //1st way of calling string constractor
    // string s("Hello");
    // cout<<s<<endl;



    //2nd way of calling string constractor
    // string s("Hello",3);
    // cout<<s<<endl;
    //Hello string input & int number 3 indicates the size or resize the string



    //3rd way of calling string constractor
    // string s="Hello";
    // string t(s); //full s strings copied in t string
    // cout<<t<<endl;



    //4th way of calling string constractor
    // string s="Hello";
    // string t(s,3); 
    // cout<<t<<endl;
    //Copies in t string after deleting first 3 characters



    //5th way of calling string constractor
    string s(7,'B');
    cout<<s<<endl;
    //creates 7 size string & places 7 B in the string
    return 0;
}