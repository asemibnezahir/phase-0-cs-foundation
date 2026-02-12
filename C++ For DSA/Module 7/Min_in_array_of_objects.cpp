#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;
};
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

    //finding the minimum marks from input
    int mn=INT_MAX;
    for(int i=0;i<in;i++)
    {
        mn=min(s[i].marks,mn);
    }
    cout<<"Minimum Mark in all students is "<<mn<<endl; //printing the minimum marks among all student
    
    //Now I am going to take full info of who got the minimum number
    Student mini;
    mini.marks=INT_MAX;
    for(int i=0;i<in;i++)
    {
        if(mini.marks>s[i].marks)
        {
            mini=s[i]; //assigning the full object in mini when mark is smaller
        }
    }
    cout<<mini.name<<" "<<mini.roll<<" "<<mini.marks<<endl;


    //Now I am going to take full info of who got the maximum number
    Student maxi;
    maxi.marks=INT_MIN;
    for(int i=0;i<in;i++)
    {
        if(maxi.marks<s[i].marks)
        {
            maxi=s[i]; //assigning the full object in maxi when mark is greater
        }
    }
    cout<<maxi.name<<" "<<maxi.roll<<" "<<maxi.marks<<endl;

    
    return 0;
}