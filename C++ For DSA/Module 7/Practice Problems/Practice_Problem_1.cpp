#include<bits/stdc++.h>
using namespace std;

class Student 
{
    public:
    string name;
	int roll;
	int marks;
};

bool asem(Student l,Student r)
{
    return l.marks==r.marks? l.roll>r.roll:l.marks<r.marks;
}
int main()
{
    int in;
    cin>>in;
    Student st[in];
    for(int i=0;i<in;i++)
    {
        cin>>st[i].name>>st[i].roll>>st[i].marks;
    }
    cout<<endl;
    sort(st,st+in,asem);
    for(int i=0;i<in;i++)
    {
        cout<<st[i].name<<" "<<st[i].roll<<" "<<st[i].marks<<endl;
    }
    return 0;
}