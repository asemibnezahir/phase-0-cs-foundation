#include<bits/stdc++.h>
using namespace std;
int main()
{
    //to reverse an array i have done this manually with two pointers technique
    //now we will use built-in reverse function to do this task

    int in;
    cin>>in;
    int arr[in];
    for(int i=0;i<in;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,arr+in); //exactly give parameter like sort function
    for(int i=0;i<in;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //reversing a string
    string s("Hello");
    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}