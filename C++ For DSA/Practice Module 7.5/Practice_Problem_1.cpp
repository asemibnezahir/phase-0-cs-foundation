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
    return l.marks==r.marks?l.roll<r.roll:l.marks>r.marks;
}
int main()
{
    int in;
    cin>>in;
    Student as[in];
    for(int i=0;i<in;i++)
    {
        cin>>as[i].name>>as[i].roll>>as[i].marks;
    }
    sort(as,as+in,cmp);
    cout<<endl;
    for(int i=0;i<in;i++)
    {
        cout<<as[i].name<<" "<<as[i].roll<<" "<<as[i].marks<<endl;
    }
    return 0;
}