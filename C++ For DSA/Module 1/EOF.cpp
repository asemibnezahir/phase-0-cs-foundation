#include<iostream>
using namespace std;
int main()
{
    //EOF--> End of File
    //যদি ইউজার যতটা চায় ততটা ইনপুট দিবে এমন কোনো কেস আসে, সেক্ষেত্রে যে এপ্রোচ নেয়া হয় সেটাই EOF
    int x;
    while(cin>>x)
    {
        cout<<x <<endl;
    }
    return 0;
}