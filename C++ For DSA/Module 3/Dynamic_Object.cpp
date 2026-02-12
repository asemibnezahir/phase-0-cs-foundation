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
int main()
{
    Student* p=new Student(45,5,3.28); //Declared a dynamic object
    cout<<(*p).roll<<" "<<p->cls<<" "<<(*p).gpa<<endl;//Printing a dynamic object
    return 0;
}
