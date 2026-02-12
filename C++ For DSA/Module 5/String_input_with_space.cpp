#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    string s;
    // cin>>s; taking input without space

    //to take with space
    //cin.getline(s,100); we can take this when we take static or fixed size char array
    //but string class indicates dynamic character array,thats why this won't work here

    //So, Final correct method for taking a string input with space
    cin.ignore(); //To ignore the enter as string input after integer
    getline(cin,s);
    cout<<x<<endl<<s;

    //recommandation always cin, if only we need to print space then only use getline
    return 0;
}