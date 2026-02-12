#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(string n, int r, char s, int m, int c)
    {
        name = n;
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};

int main() 
{
    Student s1("Asem",1,'A',100,12);
    Student s2("Rifat",2,'B',90,12);
    Student s3("Pranto",3,'C',80,12);
    int mx=max({s1.math_marks,s2.math_marks,s3.math_marks});
    if(mx==s1.math_marks)
    {
        cout<<s1.name;
    }
    else if(mx==s2.math_marks)
    {
        cout<<s2.name;
    }
    else if(mx==s3.math_marks)
    {
        cout<<s3.name;
    }
    return 0;
}