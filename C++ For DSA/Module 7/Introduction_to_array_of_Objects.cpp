#include<bits/stdc++.h>
using namespace std;
//Creating a class
class Student
{
    public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int in; //size of the array of object
    cin>>in; 
    Student s[in]; //Declared an array of object

    for(int i=0;i<in;i++) //Taking input of array of object
    {
        cin.ignore(); //To Stop taking the enter button as input
        getline(cin,s[i].name); //Taking String input with space
        cin>>s[i].roll;
        cin>>s[i].marks;
    }

    for(int i=0;i<in;i++) //Printing Output of array of object
    {
        cout<<s[i].name<<" ";
        cout<<s[i].roll<<" ";
        cout<<s[i].marks;
        cout<<endl;
    }

    return 0;
}