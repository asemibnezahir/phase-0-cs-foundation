#include<bits/stdc++.h>
using namespace std;
int main()
{
    int in;
    cin>>in;
    int arr[in];
    for(int i=0;i<in;i++)
    {
        cin>>arr[i];
    }
    //I have to sort here
    /*
    Sort Function syntax:
    sort(starting,ending);
    */
    sort(arr,arr+in); //Ascending Order
    for(int i=0;i<in;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+in,greater<int>()); //Descending Order
    for(int i=0;i<in;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}