#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Declaring ,taking input,showing output of a Static Array
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin >>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        cout <<arr[i] <<" ";
    }



    ////Declaring ,taking input,showing output of a Dynamic Array
    int* p=new int[5];
    //*p={10,20,30,40,50}; Value Assigning in Dynamic Array
    for(int i=0;i<5;i++)
    {
        cin >>p[i];
    }
    for(int i=0;i<5;i++)
    {
        cout <<p[i] <<" ";
    }
    return 0;
}
