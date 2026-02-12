#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >>x;
    //Normal if else
    /*
    if(x%2==0)
    {
        cout <<"Even Number"<<endl;
    }
    else
    {
        cout <<"Odd Number"<<endl;
    }
    */
    //Ternary Operator is shotcut of if else
    x%2==0? cout <<"Even Number\n": cout << "Odd Number\n";
    
    //Syntax:
    // condition? if_true_code : else_code
    //Disclaimer: Only applicable for one if with 1 task+ 1 else with 1 task

    return 0;
}