#include<iostream>
using namespace std;
int main()
{
    //Note--> Normal int or double arrays are same in C and C++

    int x;
    cin >>x;
    cin.ignore();//to ignore one input
    char s[100];
    cin.getline(s,100);
    cout <<x <<endl <<s;
    //Details in C++ Module-1 Video No 10

    //We Can Take a string input like a variable in C++
    string asem;
    cin >>asem;
    cout <<asem;
    
    return 0;
}