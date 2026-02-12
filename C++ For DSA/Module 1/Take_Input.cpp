#include<iostream>
using namespace std; //By This now we don't need to use std:: after every command
int main()
{
    int x;
    //std is a namespace mentioned in introduction

    /* std:: */ cin>>x; //cin for giving input in C++ like scanf
    //">>" this sign before variable to take input in this variable

   /*  std:: */ cout<<x <</*  std:: */ endl;
    //Printing mechanism mentioned in introduction

    //For Input-->  >> this sign
    //For Output--> << this sign

    //Taking Multiple input(same as output)
    int a,b,c;
    cin >>a >>b >>c;
    cout <<a <<" " <<b <<" " <<c <<endl;

    //To print ascii value of character
    /*
    In C
    char asem='D';
    printf("%d",asem);
    */

    //In C++
    char asem='D';
    int ascii=asem;
    cout <<asem <<"-->"<<ascii <<endl;

    //Other Method is Type Casting
    char gihan='E';
    cout <<gihan <<"-->"<<(int)gihan <<endl;
    //Typecasting means changing data type of a variable for a single command
    // gihan was char, i have made it int before printing second time by typecasting
    //Syntax: (datatype)variable_name
    
    return 0;
}