#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string nm;
    int cls;
    char s;
    int id;
};
int main()
{
    int in;
    cin>>in;
    Student St[in];
    for(int i=0;i<in;i++)
    {
        cin>>St[i].nm>>St[i].cls>>St[i].s>>St[i].id;
    }
    for(int i=0,j=in-1;i<j;i++,j--)
    {
        swap(St[i].s,St[j].s);
    }
    for(int i=0;i<in;i++)
    {
        cout<<St[i].nm<<" "<<St[i].cls<<" "<<St[i].s<<" "<<St[i].id<<endl;
    }
    return 0;
}