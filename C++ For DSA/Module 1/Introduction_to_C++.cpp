#include<iostream> //Header file: Full Form--> Input & Output Stream
int main() //Main Function
{
    std::cout<<"Hello World!"<<"\n"; //cout is printing function, std is a namespace where this cout command stored.

    int x=10; //Variable Declaration & assigning value in C++(same to same)
    double d=3.526;
    char c='A';
    std::cout<<x <<" " <<d << std::endl <<c <<"\n"; //To Print the value of x variable in C++

    // To print multiple variable with one cout we just have to add "<<" before variable name
    // <<" " This is for printing a space after printing one
    // <<"\n" This is one method to print new line like C
    // << std::endl This is standard method for new line in C


    //Printing "My Favorite Number is 100" in C++
    int y=100;
    std:: cout << "My Favorite Number is "<< y ;
    return 0;
}