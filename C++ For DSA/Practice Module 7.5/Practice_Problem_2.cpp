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
    Student as[in]; 
    for(int i=0;i<in;i++)
    {
        cin>>as[i].name>>as[i].roll>>as[i].marks;
    }
    for(int i=0,j=in-1;i<j;i++,j--)
    {
        swap(as[i],as[j]);
    }
    for(int i=0;i<in;i++)
    {
        cout<<as[i].name<<" "<<as[i].roll<<" "<<as[i].marks<<endl;
    }
    return 0;
}