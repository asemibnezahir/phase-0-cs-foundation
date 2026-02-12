#include<bits/stdc++.h>
using namespace std;
//Declaring a class
class Student
{
    public://Access Modifier 
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    // Student a;
    // char temp[100]="Sakib";
    // strcpy(a.name,temp);
    // a.roll=10;
    // a.gpa=4.58;

    // Student b;
    // cin>>b.name>>b.roll>>b.gpa;

    //For Full name or more specificlly taking space as a input in string
    Student c;
    cin.getline(c.name,100);
    cin>>c.roll>>c.gpa;

    // cout <<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
    // cout <<b.name<<" "<<b.roll<<" "<<fixed<<setprecision(2)<<b.gpa<<endl;
    cout <<c.name<<" "<<c.roll<<" "<<fixed<<setprecision(2)<<c.gpa<<endl;

    return 0;
}