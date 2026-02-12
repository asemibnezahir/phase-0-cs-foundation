#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int english_marks;
};
bool cmp(Student l,Student r)
{
    if(l.english_marks==r.english_marks)
    {
        if(l.math_marks==r.math_marks)
        {
            return l.id<r.id;
        }
        else
        {
            return l.math_marks>r.math_marks;
        }
    }
    else
    {
        return l.english_marks>r.english_marks;
    }
}
int main()
{
    int in;
    cin>>in;
    Student St[in];
    for(int i=0;i<in;i++)
    {
        cin>>St[i].nm>>St[i].cls>>St[i].s>>St[i].id>>St[i].math_marks>>St[i].english_marks;
    }
    sort(St,St+in,cmp);
    for(int i=0;i<in;i++)
    {
        cout<<St[i].nm<<" "<<St[i].cls<<" "<<St[i].s<<" "<<St[i].id<<" "<<St[i].math_marks<<" "<<St[i].english_marks<<endl;
    }
    return 0;
}