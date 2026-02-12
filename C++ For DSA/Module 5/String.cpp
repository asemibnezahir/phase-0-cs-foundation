#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Input & Output like normal character array
    string Asem;
    cin>>Asem;
    cout<<Asem<<endl;

    //String can be initialize and value can be changed in another line after declarattion
    string mod="Gello";
    mod="Melllo";

    //String can be compared in this way
    string cm1="Hello",cm2="Hello";
    if(cm1==cm2)
    {
        cout<<"Same";
    }
    else
    {
        cout<<"Not same";
    }
    return 0;
}