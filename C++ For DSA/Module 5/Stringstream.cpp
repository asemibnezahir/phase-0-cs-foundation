#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    stringstream sw(s); //"stringstream" is a class that differentiates every words from parameter string
    //"sw" here named as object, can be changed
    string asem;//Declaring another string where i will place one word

    /*
    sw>>asem; //Placing 1st word in asem string
    cout<<asem<<endl; //printing the placed word

    sw>>asem; //Second Word placed
    cout<<asem<<endl;

    sw>>asem; //third Word placed
    cout<<asem<<endl;

    sw>>asem; //forth Word placed
    cout<<asem<<endl;
    */
    //same work so can be done with a loop
    while(sw>>asem)
    {
        cout<<asem<<endl;
    }

    cout<<s;
    return 0;
}