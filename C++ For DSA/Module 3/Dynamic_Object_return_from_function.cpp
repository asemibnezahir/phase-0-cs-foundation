#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    //Declaring Constractor
    Student(int r,int c,double g)
    {
        roll=r;
        cls=c;
        gpa=g;
    }
};

Student* fun()
{
    Student* karim=new Student(45,5,3.28);
    return karim;
}
int main()
{
    Student* p=fun();
    cout<<(*p).roll<<" "<<p->cls<<" "<<(*p).gpa<<endl;//Printing a dynamic object
    return 0;
}
