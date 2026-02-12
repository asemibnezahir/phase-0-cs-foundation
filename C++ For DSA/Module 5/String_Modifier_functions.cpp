#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello World";
    string s2=" from a programmer";
    //to add another string in a string
    s+=s2;
    cout<<s<<endl;
    //there is also a built-in function exist
    string s3=" named Asem Ibne Zahir";
    s.append(s3);
    cout<<s<<endl;

    //to insert a character at the end of a string
    //method one--> s+='A';
    //method two with function
    s.push_back('A');
    cout<<s<<endl;

    //to remove the last character of string
    s.pop_back();
    cout<<s<<endl;

    string s4="Hello World";
    //to assign s4 in s
    //s=s4;
    //function;
    s.assign(s4);
    cout<<s<<endl;

    //to delete 3 charactar from 5th index ;
    s.erase(5,3);
    cout<<s<<endl;

    //to delete & replace bangladesh;
    s.replace(3,2,"bangladesh");
    cout<<s<<endl;

    //replace without deleting or insert inside
    s.replace(3,0,"lo ");
    s.replace(16,0," and wo");
    cout<<s<<endl;

    //insert a string in 16th index with function
    s.insert(16," with Asem Ibne Zahir");
    cout<<s<<endl;
    
    return 0;
}