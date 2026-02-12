#include<iostream>
#include<algorithm> //header file for max,min,swap function use
using namespace std;
int main()
{
    int a,b;
    cin >>a >>b;
    //In normal method in C
    /* 
    if(a<b)
    {
        cout <<a;
    }
    else
    {
        cout <<b;
    } 
    */
   //C++ Function
   cout <<min(a,b)<<endl; //To print minimum number
   cout <<max(a,b)<<endl; //To print max number

   //if we want to compare more than 2 input
    int d,e,f,g,h;
    cin >>d >>e >>f >>g >>h;
    cout <<min({d,e,f,g,h})<<endl;
    cout <<max({d,e,f,g,h})<<endl;

    //Swaping to values
    int x,y;
    cin >>x >>y;

    // Normal Swapping 
    /*
    int temp=x;
    x=y;
    y=temp; 
    */
   //Swap Function C++
    swap(x,y);
    cout <<x <<" " <<y;
    return 0;
}