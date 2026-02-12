#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;
};


bool cmp(Student l,Student r) 
{
    //Detailed Form
    // if(l.marks<r.marks) 
    // { 
    //     return true; 
    // }

    // else if(l.marks>r.marks)
    // {
    //     return false; 
    // }
    
    // else //when first comparing parameters are equal
    // {
    //     //adding the second parameters as condition
    //     if(l.roll<r.roll)
    //     {
    //         return true;
    //     }
    //     else
    //     {
    //         return false;
    //     }

    // }


    //Shortcut form
    // if(l.marks==r.marks)
    // {
    //     return l.roll<r.roll;
    // }
    // else
    // {
    //     return l.marks<r.marks;
    // }


    //More Short form with ternary
    return l.marks==r.marks? l.roll<r.roll: l.marks<r.marks;
}


int main()
{
    int in;
    cin>>in; 
    Student s[in];

    for(int i=0;i<in;i++)
    {
        cin>>s[i].name;
        cin>>s[i].roll;
        cin>>s[i].marks;
    }
    cout<<endl;
    
    //sorting as first with mark secondly with roll
    sort(s,s+in,cmp);
    for(int i=0;i<in;i++) 
    {
        cout<<s[i].name<<" ";
        cout<<s[i].roll<<" ";
        cout<<s[i].marks;
        cout<<endl;
    }
    return 0;
}